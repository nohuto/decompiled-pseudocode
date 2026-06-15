/*
 * XREFs of sub_180029174 @ 0x180029174
 * Callers:
 *     PbmLaunchBackgroundTask @ 0x1800242E0 (PbmLaunchBackgroundTask.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_18001F3CC @ 0x18001F3CC (sub_18001F3CC.c)
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029174(int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int128 v14; // xmm6
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v18; // [rsp+28h] [rbp-30h]

  v8 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( !a4 )
  {
    v10 = -2147467261;
LABEL_3:
    *a4 = xmmword_180043368;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x13u, &stru_180044DE8, v10);
    }
    goto LABEL_7;
  }
  v12 = sub_18001F3CC(v9, a1);
  v13 = v12;
  if ( !v12 )
  {
    v10 = -2147418113;
    goto LABEL_3;
  }
  v10 = sub_180026A18(v12, a2, a3, (__int64)a4);
  if ( v10 < 0 )
    goto LABEL_3;
  v14 = *a4;
  lpCriticalSection = (LPCRITICAL_SECTION)(v13 + 32);
  v18 = 0;
  sub_18001A330((__int64)&lpCriticalSection);
  v15 = *(_QWORD **)(v13 + 72);
  while ( v15 )
  {
    v16 = v15[2];
    v15 = (_QWORD *)*v15;
    if ( *(_DWORD *)(v16 + 192) == a1 && !*(_DWORD *)(v16 + 448) )
    {
      *(_OWORD *)(v16 + 552) = v14;
      break;
    }
  }
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_7:
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v10;
}
