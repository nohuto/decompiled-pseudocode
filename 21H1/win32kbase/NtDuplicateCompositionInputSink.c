/*
 * XREFs of NtDuplicateCompositionInputSink @ 0x1C00B8000
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C001B7B0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x1C00B80F8 (-Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C00B8150 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

__int64 __fastcall NtDuplicateCompositionInputSink(void *a1, HANDLE *a2)
{
  __int64 v4; // r8
  int v5; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = (HANDLE)-1LL;
  v5 = 0;
  if ( !UserIsCurrentProcessDwm((__int64)a1, (__int64)a2) )
    v5 = -1073741790;
  if ( v5 < 0 )
    goto LABEL_14;
  Object = 0LL;
  LOBYTE(v4) = 1;
  v5 = CompositionInputObject::ResolveHandle(a1, 1LL, v4, (struct CompositionInputObject **)&Object);
  if ( v5 >= 0 )
  {
    v5 = CompositionObject::CreateHandle((CompositionObject *)Object, 3u, 0, 0, &Handle);
    if ( v5 >= 0 )
      InputTraceLogging::InputSink::Duplicate((const struct CompositionInputObject *)Object, a1, Handle, 0);
    ObfDereferenceObject(Object);
  }
  if ( v5 < 0 )
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
  return (unsigned int)v5;
}
