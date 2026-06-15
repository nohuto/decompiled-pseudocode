/*
 * XREFs of sub_18001FCE0 @ 0x18001FCE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18001A650 @ 0x18001A650 (sub_18001A650.c)
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 *     sub_180029AAC @ 0x180029AAC (sub_180029AAC.c)
 *     _o_pow @ 0x18003A7A8 (_o_pow.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001FCE0(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const wchar_t *v5; // r9
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  int v11; // edx
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  float v14; // [rsp+78h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+80h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v15 = v4;
  LODWORD(v13) = 0;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v5 = L"Disabled";
    if ( a2[2] )
      v5 = L"Enabled";
    sub_18001A650(
      *((_QWORD *)off_18004F000 + 2),
      *(unsigned int *)(*(_QWORD *)a2 + 192LL),
      *(unsigned int *)(*(_QWORD *)a2 + 196LL),
      v5,
      *(_DWORD *)(*(_QWORD *)a2 + 196LL),
      *(_DWORD *)(*(_QWORD *)a2 + 192LL),
      a2[3]);
  }
  v6 = 0;
  if ( (int)a2[3] <= 0 )
    v6 = a2[3];
  v7 = -24;
  if ( v6 > -24 )
    v7 = v6;
  a2[3] = v7;
  v14 = (float)v7;
  if ( COERCE_INT((float)v7) != -8388608 )
    o_pow();
  v8 = sub_180029AAC(*(_DWORD *)(*(_QWORD *)a2 + 196LL), (__int64)&v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x33u, &stru_1800445C8, v8);
    }
    sub_180005724("CApplicationManager::OnScreenReaderStateChanged", 2975, v9);
  }
  else
  {
    v10 = a2[2] == 0;
    v11 = *(_DWORD *)(*(_QWORD *)a2 + 524LL);
    *(_DWORD *)(*(_QWORD *)a2 + 524LL) = v10;
    if ( (_DWORD)v13 || v11 != v10 )
      sub_18001E454(a1, *(_DWORD *)(*(_QWORD *)a2 + 196LL), 3u);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v9;
}
