/*
 * XREFs of sub_18011213C @ 0x18011213C
 * Callers:
 *     sub_1801122B0 @ 0x1801122B0 (sub_1801122B0.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_18011213C(_QWORD *a1)
{
  signed __int64 v2; // rax
  REGHANDLE v3; // rcx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  *a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  v2 = _InterlockedExchangeAdd64(&qword_18021AB30, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 == 1 )
  {
    v3 = RegHandle;
    RegHandle = 0LL;
    dword_18020DB20 = 0;
    LODWORD(v2) = EventUnregister(v3);
  }
  v4 = a1[14];
  if ( v4 )
    LODWORD(v2) = o__aligned_free(v4);
  v5 = a1[13];
  if ( v5 >= 0x10 )
  {
    v6 = a1[10];
    v7 = v5 + 1;
    if ( v7 >= 0x1000 )
    {
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v7 + 39;
      v10 = v6 - v8;
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
        goto LABEL_26;
      v6 = v8;
    }
    LODWORD(v2) = j_j__o_free(v6);
  }
  a1[12] = 0LL;
  a1[13] = 15LL;
  *((_BYTE *)a1 + 80) = 0;
  v11 = a1[9];
  if ( v11 >= 0x10 )
  {
    v12 = a1[6];
    v13 = v11 + 1;
    if ( v13 < 0x1000 )
    {
LABEL_14:
      LODWORD(v2) = j_j__o_free(v12);
      goto LABEL_15;
    }
    v14 = *(_QWORD *)(v12 - 8);
    v9 = v13 + 39;
    v10 = v12 - v14;
    if ( (unsigned __int64)(v10 - 8) <= 0x1F )
    {
      v12 = v14;
      goto LABEL_14;
    }
LABEL_26:
    o__invalid_parameter_noinfo_noreturn(v10, v9);
    JUMPOUT(0x1801122A3LL);
  }
LABEL_15:
  a1[8] = 0LL;
  a1[9] = 15LL;
  *((_BYTE *)a1 + 48) = 0;
  v15 = (volatile signed __int32 *)a1[5];
  if ( v15 )
  {
    LODWORD(v2) = _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF);
    if ( (_DWORD)v2 == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      LODWORD(v2) = _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF);
      if ( (_DWORD)v2 == 1 )
        LODWORD(v2) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v16 = a1[3];
  if ( v16 )
    LODWORD(v2) = j__o_free(v16);
  v17 = a1[2];
  if ( v17 )
    LODWORD(v2) = j__o_free(v17);
  v18 = a1[1];
  if ( v18 )
    LODWORD(v2) = j__o_free(v18);
  return v2;
}
