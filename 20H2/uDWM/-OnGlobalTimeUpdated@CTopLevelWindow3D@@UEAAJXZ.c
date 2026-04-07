/*
 * XREFs of ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x18003BC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnGlobalTimeUpdated(CTopLevelWindow3D *this)
{
  int v1; // eax
  __int64 v2; // rbx

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x1000) == 0 )
  {
    v2 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 20) = v1 | 0x1000;
    while ( v2 && (*(_BYTE *)(v2 + 80) & 1) == 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
      v2 = *(_QWORD *)(v2 + 24);
    }
  }
  return 0LL;
}
