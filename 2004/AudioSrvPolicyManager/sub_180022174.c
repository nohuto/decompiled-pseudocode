/*
 * XREFs of sub_180022174 @ 0x180022174
 * Callers:
 *     sub_180021E3C @ 0x180021E3C (sub_180021E3C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18002239C @ 0x18002239C (sub_18002239C.c)
 *     sub_18002CECC @ 0x18002CECC (sub_18002CECC.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_180022174(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  LPVOID *v8; // rbx
  LPVOID *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = 0;
  if ( qword_18004FE78 )
  {
    v6 = sub_18002CECC(a2, a3, a4, a5, (__int64)&v10);
    v8 = v10;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = sub_18002239C(v7, v10);
      if ( v5 >= 0 )
        v8 = 0LL;
    }
    if ( v8 )
    {
      if ( *v8 )
      {
        CoTaskMemFree(*v8);
        *v8 = 0LL;
      }
      sub_180039D98(v8);
    }
    if ( v5 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x12u, &stru_1800447D0, v5);
      }
      sub_180005724("CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem", 516, v5);
    }
  }
  return (unsigned int)v5;
}
