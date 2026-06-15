/*
 * XREFs of sub_1800F24F0 @ 0x1800F24F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800F26E0 @ 0x1800F26E0 (sub_1800F26E0.c)
 *     sub_1800F2970 @ 0x1800F2970 (sub_1800F2970.c)
 *     sub_1800F580C @ 0x1800F580C (sub_1800F580C.c)
 *     sub_18013983C @ 0x18013983C (sub_18013983C.c)
 */

__int64 __fastcall sub_1800F24F0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // esi
  __int64 v7; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+38h] [rbp-C8h]
  LPCRITICAL_SECTION v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+48h] [rbp-B8h]
  _QWORD v13[158]; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+550h] [rbp+450h] BYREF
  void *v15; // [rsp+558h] [rbp+458h] BYREF
  __int64 v16; // [rsp+560h] [rbp+460h] BYREF

  sub_180066980((__int64)&v11, (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  *a2 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v6 = sub_18013983C(v4, 0LL, &v14, &v15);
  if ( v6 >= 0 )
  {
    if ( !v14 )
    {
LABEL_6:
      *a2 = v5;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800F580C(*((_QWORD *)off_18019C348 + 2), 16LL, v7, 1LL, v5);
      }
      goto LABEL_14;
    }
    memset(v13, 0, 0x4D0uLL);
    v6 = sub_1800F26E0(a1, (_DWORD)v15, v14, 1, 0, (__int64)&v16);
    if ( v6 >= 0 )
    {
      sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 120));
      HIDWORD(v13[35]) = 0;
      LODWORD(v13[1]) = 1;
      LODWORD(v13[153]) = 1;
      v5 = v16;
      v13[0] = v16;
      sub_1800F2970(a1 + 160, v13);
      HIDWORD(v13[35]) = 1;
      sub_1800F2970(a1 + 160, v13);
      if ( v10 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_6;
    }
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x11u, (__int64)&unk_180171BD8, v6);
  }
LABEL_14:
  if ( v15 )
    sub_180033A70(v15);
  if ( v12 )
    LeaveCriticalSection(v11);
  return (unsigned int)v6;
}
