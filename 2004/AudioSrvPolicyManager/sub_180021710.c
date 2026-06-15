/*
 * XREFs of sub_180021710 @ 0x180021710
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x1800231A0 (PbmReportHostedAppStateChange.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_1800218C8 @ 0x1800218C8 (sub_1800218C8.c)
 *     sub_180021988 @ 0x180021988 (sub_180021988.c)
 *     sub_180021A3C @ 0x180021A3C (sub_180021A3C.c)
 *     sub_180022274 @ 0x180022274 (sub_180022274.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180021710(int a1, int a2, int a3, int a4, _QWORD *a5)
{
  int v5; // r15d
  int v6; // r12d
  int v7; // r13d
  _QWORD *v8; // r14
  __int64 v9; // rsi
  HANDLE ProcessHeap; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  int v14; // edi
  int *v16; // rbx
  _QWORD *v17; // [rsp+38h] [rbp-60h]
  _QWORD *v18; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v19; // [rsp+48h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-48h] BYREF
  char v21; // [rsp+58h] [rbp-40h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)&unk_18004FEF0;
  v21 = 0;
  sub_18001A330((__int64)&lpCriticalSection);
  v8 = a5;
  v9 = *a5;
  if ( *a5 && (unsigned int)sub_180021988(*a5) )
    goto LABEL_12;
  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v13 = v11;
  if ( v11 )
  {
    v11[5] = 10LL;
    *v11 = 0LL;
    v11[1] = 0LL;
    v11[2] = 0LL;
    v11[3] = 0LL;
    v11[4] = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v17 = v13;
  LODWORD(v9) = (_DWORD)v13;
  v18 = v13;
  if ( v13 )
  {
    try
    {
      sub_180022274(v12, &v18);
    }
    catch ( ATL::CAtlException *v19 )
    {
      v16 = (int *)v19;
      if ( *(_DWORD *)v19 == -1073741571 )
        o__resetstkoflw();
      v14 = *v16;
      if ( *v16 < 0 )
      {
        sub_1800218C8(v17);
        goto LABEL_13;
      }
      v8 = a5;
      v5 = a4;
      v6 = a3;
      v7 = a2;
      LODWORD(v9) = (_DWORD)v18;
      v13 = v17;
    }
    *v8 = v13;
LABEL_12:
    v14 = sub_180021A3C(v9, a1, v7, v6, v5);
LABEL_13:
    if ( v14 >= 0 )
      goto LABEL_19;
    goto LABEL_14;
  }
  v14 = -2147024882;
LABEL_14:
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 2u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_1800447D0, v14);
  }
  sub_180005724("PickerHostContextManager::OnHostedAppStateChanged", 87, v14);
LABEL_19:
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v14;
}
