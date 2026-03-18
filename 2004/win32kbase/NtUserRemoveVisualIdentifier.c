/*
 * XREFs of NtUserRemoveVisualIdentifier @ 0x1C0137D30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z @ 0x1C01B77EC (-IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C01F73E0 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 */

__int64 __fastcall NtUserRemoveVisualIdentifier(struct _LUID *a1)
{
  int v1; // ebx
  NTSTATUS v3; // eax
  ULONG v4; // eax
  __int64 v5; // rdx
  struct _LUID v6; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0LL;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v6 = *a1;
  if ( CDesktopInputTransform::IsDesktopVisualInputSinkMapIdentity(&v6) )
    return -1073741790LL;
  v3 = InputObjectMap::RemoveMapping(&v6, 0LL);
  if ( v3 >= 0 )
  {
    return 1;
  }
  else
  {
    v4 = RtlNtStatusToDosError(v3);
    UserSetLastError(v4, v5);
  }
  return v1;
}
