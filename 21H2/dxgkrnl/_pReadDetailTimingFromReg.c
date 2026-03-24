/*
 * XREFs of _pReadDetailTimingFromReg @ 0x1C019B1A8
 * Callers:
 *     _pLoadAdditinalMode @ 0x1C019AE40 (_pLoadAdditinalMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 */

__int64 __fastcall pReadDetailTimingFromReg(HANDLE KeyHandle, int a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rbp
  __int64 v8; // r14
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  _DWORD *v15; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-60h] BYREF
  int v23; // [rsp+3Ch] [rbp-5Ch]
  int v24; // [rsp+40h] [rbp-58h]
  unsigned int v25; // [rsp+44h] [rbp-54h]

  ResultLength = 0;
  v4 = (unsigned int *)(a4 + 4);
  v5 = 0;
  v6 = a3;
  v8 = a2;
  while ( 1 )
  {
    v10 = ZwQueryValueKey(
            KeyHandle,
            (PUNICODE_STRING)&unk_1C0071C80 + v5,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    v14 = v10;
    if ( v10 < 0 )
      break;
    if ( v23 != 4 || v24 != 4 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v18[3] = v8;
      v18[4] = v6;
      v18[5] = v5;
      v18[6] = v14;
      goto LABEL_23;
    }
    if ( v5 )
    {
      *v4 = v25;
    }
    else
    {
      v12 = HIBYTE(v25);
      *(_DWORD *)(a4 + 4) = v25 & 0xFFFFFF;
      *(_DWORD *)a4 = v12;
      if ( (unsigned int)(v12 - 1) > 0x1A && (_DWORD)v12 != 255 )
      {
        LODWORD(v14) = -1071774942;
        v17 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v17 + 24) = v6;
        *(_QWORD *)(v17 + 32) = v8;
        WdLogEvent5_WdWarning(v17);
        return (unsigned int)v14;
      }
      LODWORD(v14) = 0;
    }
    ++v5;
    ++v4;
    if ( v5 >= 6 )
      goto LABEL_8;
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
  v19[5] = v5;
  v19[3] = v8;
  v19[4] = v6;
  v19[6] = v14;
  WdLogEvent5_WdWarning(v19);
LABEL_8:
  if ( (int)v14 < 0 )
    return (unsigned int)v14;
  v15 = (_DWORD *)(a4 + 8);
  if ( (*(_DWORD *)(a4 + 8) & 0xFFFFFF) != 0 )
  {
    if ( *(_WORD *)(a4 + 12) < 0x64u )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v20 = *(unsigned __int16 *)(a4 + 12);
    }
    else
    {
      if ( *(_WORD *)(a4 + 20) >= 0x64u )
      {
        LODWORD(v14) = 0;
        return (unsigned int)v14;
      }
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v20 = *(unsigned __int16 *)(a4 + 20);
    }
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v20 = *v15 & 0xFFFFFFLL;
  }
  v18[3] = v20;
  v18[4] = v15;
LABEL_23:
  WdLogEvent5_WdWarning(v18);
  LODWORD(v14) = -1073741811;
  return (unsigned int)v14;
}
