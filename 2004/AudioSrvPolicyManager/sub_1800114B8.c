/*
 * XREFs of sub_1800114B8 @ 0x1800114B8
 * Callers:
 *     sub_1800112C0 @ 0x1800112C0 (sub_1800112C0.c)
 *     sub_1800129C0 @ 0x1800129C0 (sub_1800129C0.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

void __fastcall sub_1800114B8(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v8; // r10
  _DWORD *v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v11 = 0;
  sub_18001A330(&lpCriticalSection);
  v8 = *(_QWORD **)(a1 + 72);
  while ( v8 )
  {
    v9 = (_DWORD *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( !v9[112] && (a4 || !v9[128]) && v9[127] != a2 )
    {
      v9[127] = a2;
      v9[128] = 1;
      v9[129] = a3;
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
