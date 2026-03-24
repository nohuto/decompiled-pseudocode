/*
 * XREFs of ?DxgkSignalEventCBCblt@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C0026B50
 * Callers:
 *     DxgkSignalEventCB @ 0x1C0041E20 (DxgkSignalEventCB.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSignalEventCBCblt(const struct _DXGKARGCB_SIGNALEVENT *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  HANDLE hEvent; // rax
  _QWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+58h] [rbp+1Fh] BYREF
  int v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+64h] [rbp+2Bh]
  __int64 v14; // [rsp+68h] [rbp+2Fh]
  __int64 v15; // [rsp+70h] [rbp+37h]
  __int64 v16; // [rsp+78h] [rbp+3Fh]
  __int16 v17; // [rsp+80h] [rbp+47h]
  int v18; // [rsp+82h] [rbp+49h]
  __int16 v19; // [rsp+86h] [rbp+4Dh]

  LODWORD(v2) = 0;
  if ( a1->Flags < 2 )
  {
    hEvent = a1->hEvent;
    v6 = (_QWORD *)*((_QWORD *)hEvent + 3);
    if ( v6 )
    {
      v15 = *((_QWORD *)hEvent + 1);
      v14 = 0LL;
      v18 = 0;
      v19 = 0;
      v11 = 0LL;
      v12 = 0;
      v13 = 2;
      v16 = 0LL;
      v17 = 0;
      v7 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64))qword_1C00B4340)(*v6, &v11, 48LL);
      v2 = v7;
      if ( v7 < 0 )
      {
        v10 = WdLogNewEntry5_WdError(v9, v8);
        *(_QWORD *)(v10 + 24) = v2;
        WdLogEvent5_WdError(v10);
      }
    }
    else
    {
      KeSetEvent(*((PRKEVENT *)hEvent + 1), 0, 0);
    }
    return (unsigned int)v2;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v3 + 24) = 2537LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
