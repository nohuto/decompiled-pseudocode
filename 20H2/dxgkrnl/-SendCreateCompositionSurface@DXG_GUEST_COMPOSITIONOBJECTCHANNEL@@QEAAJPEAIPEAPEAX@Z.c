/*
 * XREFs of ?SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAIPEAPEAX@Z @ 0x1C028CDA4
 * Callers:
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C02B6284 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendCreateCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        unsigned int *a2,
        void **a3)
{
  __int64 v3; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+38h] [rbp-38h] BYREF
  int v17; // [rsp+3Ch] [rbp-34h]
  int v18; // [rsp+40h] [rbp-30h]
  unsigned int v19; // [rsp+44h] [rbp-2Ch]
  void *v20; // [rsp+48h] [rbp-28h]
  _DWORD v21[4]; // [rsp+50h] [rbp-20h] BYREF

  v3 = *((_QWORD *)this + 1);
  v21[3] = 0;
  v19 = 0;
  v20 = 0LL;
  v21[0] = 1886220131;
  v16 = 1886220131;
  v21[1] = -1073741823;
  v21[2] = 1;
  v17 = -1073741823;
  v18 = 2;
  v15 = 24;
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v3 + 32LL))(
         v3,
         v21,
         16LL,
         &v16,
         &v15);
  v10 = v6;
  if ( v6 < 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdWarning(v11);
    return (unsigned int)v10;
  }
  if ( v15 != 24 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v13 = v15;
LABEL_5:
    *(_QWORD *)(v12 + 24) = v13;
    *(_QWORD *)(v12 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v12);
    LODWORD(v10) = -1073741823;
    return (unsigned int)v10;
  }
  if ( v18 != 2 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v13 = v18;
    goto LABEL_5;
  }
  LODWORD(v10) = v17;
  if ( v17 >= 0 )
  {
    *a2 = v19;
    *a3 = v20;
  }
  return (unsigned int)v10;
}
