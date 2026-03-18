/*
 * XREFs of NtDuplicateCompositionInputSink @ 0x1C0063A60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0060F80 (UserIsCurrentProcessDwm.c)
 *     ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x1C0063B58 (-Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0063BB0 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0094F70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtDuplicateCompositionInputSink(void *a1, HANDLE *a2)
{
  int v4; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = (HANDLE)-1LL;
  v4 = 0;
  if ( !UserIsCurrentProcessDwm((__int64)a1, (__int64)a2) )
    v4 = -1073741790;
  if ( v4 < 0 )
    goto LABEL_14;
  Object = 0LL;
  v4 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v4 >= 0 )
  {
    v4 = CompositionObject::CreateHandle((CompositionObject *)Object, 3u, 0, 0, &Handle);
    if ( v4 >= 0 )
      InputTraceLogging::InputSink::Duplicate((const struct CompositionInputObject *)Object, a1, Handle, 0);
    ObfDereferenceObject(Object);
  }
  if ( v4 < 0 )
  {
LABEL_14:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  else
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = Handle;
  }
  return (unsigned int)v4;
}
