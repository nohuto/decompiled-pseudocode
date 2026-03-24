/*
 * XREFs of AccessBaseField @ 0x1C0001970
 * Callers:
 *     AccessFieldData @ 0x1C0031E7C (AccessFieldData.c)
 * Callees:
 *     PushFrame @ 0x1C0022DD8 (PushFrame.c)
 *     WriteSystemMem @ 0x1C0024A34 (WriteSystemMem.c)
 *     ReadSystemMem @ 0x1C0024B7C (ReadSystemMem.c)
 *     ReadSystemIO @ 0x1C0027528 (ReadSystemIO.c)
 *     CheckSystemIOAddressValidity @ 0x1C0027590 (CheckSystemIOAddressValidity.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 */

__int64 __fastcall AccessBaseField(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned __int64 v12; // r14
  unsigned int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // r10
  char v20; // r9
  int v21; // ecx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(), __int64); // r10
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v28; // rcx
  int (__fastcall *v29)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *); // rax
  __int64 v30[11]; // [rsp+50h] [rbp-58h] BYREF
  bool v32; // [rsp+B8h] [rbp+10h]
  char v33; // [rsp+B8h] [rbp+10h]
  __int64 v34; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+20h] BYREF

  v5 = a3[3];
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 96);
  v10 = 0;
  v11 = 1;
  v12 = *(_QWORD *)v7 + *a3;
  if ( (v5 & 0xF) - 1 <= 3 )
    v11 = 1 << ((v5 & 0xF) - 1);
  v13 = a3[2];
  v14 = 0LL;
  v15 = 0LL;
  if ( v13 < 0x20 )
    v14 = 1LL << v13;
  v16 = (v14 - 1) << a3[1];
  v34 = v16;
  v17 = ~v16;
  if ( 8 * v11 < 0x20 )
    v15 = 1LL << (8 * (unsigned __int8)v11);
  v35 = v15 - 1;
  v32 = (v5 & 0x60) == 0 && (v17 & (v15 - 1)) != 0;
  v18 = v16 & *a4;
  *a4 = v18;
  LODWORD(v19) = v18;
  v20 = a5;
  if ( !(_BYTE)a5 && (a3[3] & 0x60) == 0x20 )
  {
    LODWORD(v19) = v18 | v17;
    *a4 = v18 | v17;
  }
  v21 = *(unsigned __int8 *)(v7 + 12);
  if ( !*(_BYTE *)(v7 + 12) )
  {
    if ( !v20 )
    {
      if ( v32 )
        *a4 |= ReadSystemMem((void *)v12, v11);
      WriteSystemMem((void *)v12, v11);
      return v10;
    }
    LODWORD(v34) = 0;
    v35 = 0LL;
    if ( v11 > 8 )
    {
      v26 = -1LL;
      goto LABEL_33;
    }
    if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
      || (v29 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *))(PmHalDispatchTable + 144)) == 0LL
      || v29(0LL, v12, &v35, v11, &v34) < 0 )
    {
      if ( v11 != 1LL )
        v6 = v12 % v11;
      if ( !v6 )
      {
        switch ( v11 )
        {
          case 1u:
            v25 = *(unsigned __int8 *)v12;
            break;
          case 2u:
            v25 = *(unsigned __int16 *)v12;
            break;
          case 4u:
            v25 = *(unsigned int *)v12;
            break;
          case 8u:
            v25 = *(_QWORD *)v12;
            break;
          default:
            v25 = -1LL;
            break;
        }
        goto LABEL_32;
      }
      memmove(&v35, (const void *)v12, v11);
    }
    v25 = v35;
LABEL_32:
    v26 = v16 & v25;
LABEL_33:
    *a4 = v26;
    return v10;
  }
  if ( v21 == 1 )
  {
    if ( v20 )
    {
      *a4 = (unsigned int)ReadSystemIO((unsigned int)v12, v11, (unsigned int)v16);
    }
    else
    {
      if ( v32 )
      {
        *a4 = (unsigned int)ReadSystemIO((unsigned int)v12, v11, (unsigned int)~(_DWORD)v16) | (unsigned __int64)*a4;
        v19 = *a4;
      }
      a5 = v19;
      if ( (unsigned __int8)CheckSystemIOAddressValidity(0LL, (unsigned int)v12, v11, &a5) )
      {
        switch ( v11 )
        {
          case 1u:
            __outbyte(v12, a5);
            break;
          case 2u:
            __outword(v12, a5);
            break;
          case 4u:
            __outdword(v12, a5);
            break;
        }
      }
    }
  }
  else
  {
    v22 = gpRSAccessHead;
    if ( !gpRSAccessHead )
      goto LABEL_56;
    while ( *(_DWORD *)(v22 + 8) != v21 )
    {
      v22 = *(_QWORD *)v22;
      if ( !v22 )
        goto LABEL_56;
    }
    if ( v22
      && (v23 = *(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(), __int64))(v22 + 16)) != 0LL )
    {
      if ( v20 )
      {
        v33 = 0;
        if ( (gDebugger & 0x100) != 0 )
        {
          _m_prefetchw(&gDebugger);
          v33 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
          v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(), __int64))(v22 + 16))(
                  0LL,
                  a2 + 120,
                  v12,
                  v11,
                  a4,
                  *(_QWORD *)(v22 + 24),
                  RestartCtxtCallback,
                  a1 + 328);
        }
        else
        {
          v24 = v23(0LL, a2 + 120, v12, v11, a4, *(_QWORD *)(v22 + 24), RestartCtxtCallback, a1 + 328);
        }
        v10 = v24;
        if ( (v33 & 0x10) != 0 )
          _InterlockedOr(&gDebugger, 0x10u);
        if ( v24 == 259 )
        {
          return 32772;
        }
        else if ( v24 )
        {
          LogError(3222536216LL);
          AcpiDiagTraceAmlError(a1, 3222536216LL);
          PrintDebugMessage(2, *(unsigned __int8 *)(v7 + 12), v10, 0, 0LL);
          return (unsigned int)-1072431080;
        }
      }
      else
      {
        v30[0] = 0LL;
        v10 = PushFrame(a1, 1094931031, 96, (unsigned int)WriteCookAccess, (__int64)v30);
        if ( !v10 )
        {
          v28 = v30[0];
          *(_QWORD *)(v30[0] + 32) = a2;
          *(_QWORD *)(v28 + 40) = v22;
          *(_QWORD *)(v28 + 48) = v12;
          *(_DWORD *)(v28 + 56) = v11;
          *(_QWORD *)(v28 + 64) = *a4;
          *(_QWORD *)(v28 + 72) = v34;
          *(_BYTE *)(v28 + 88) = v32;
        }
      }
    }
    else
    {
LABEL_56:
      v10 = -1072431088;
      LogError(3222536208LL);
      AcpiDiagTraceAmlError(a1, 3222536208LL);
      PrintDebugMessage(1, *(unsigned __int8 *)(v7 + 12), 0, 0, 0LL);
    }
  }
  return v10;
}
