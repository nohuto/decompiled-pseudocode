/*
 * XREFs of AudioServerStartStopStreamConnection @ 0x1800E14C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qll @ 0x1800E1EB4 (WPP_SF_qll.c)
 */

__int64 __fastcall AudioServerStartStopStreamConnection(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // ebp
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // edi

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qll(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, a1, a2, a3);
  }
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = (volatile signed __int32 *)a1[1];
  }
  LOBYTE(a3) = v3 != 0;
  LOBYTE(a2) = v4 != 0;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))*a1)(*a1, a2, a3);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  return v7;
}
