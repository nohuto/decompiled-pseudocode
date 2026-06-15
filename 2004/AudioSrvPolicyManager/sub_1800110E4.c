/*
 * XREFs of sub_1800110E4 @ 0x1800110E4
 * Callers:
 *     sub_180010BC0 @ 0x180010BC0 (sub_180010BC0.c)
 *     pfnti @ 0x1800118E0 (pfnti.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180015E4C @ 0x180015E4C (sub_180015E4C.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800110E4(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int i; // ebp
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  if ( !*(_DWORD *)(a1 + 376) )
  {
    *(_DWORD *)(a1 + 376) = 1;
    for ( i = *(_DWORD *)(a1 + 380); i; i = *(_DWORD *)(a1 + 380) )
    {
      *(_DWORD *)(a1 + 380) = 0;
      LeaveCriticalSection(v2);
      lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
      v7 = 0;
      sub_18001A330(&lpCriticalSection);
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 4u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x10u, &stru_180043390, i);
      }
      v4 = *(_QWORD **)(a1 + 72);
      while ( v4 )
      {
        v5 = v4[2];
        v4 = (_QWORD *)*v4;
        sub_180015E4C(v5, i);
      }
      if ( v7 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v7 = 0;
      }
      EnterCriticalSection(v2);
    }
    *(_DWORD *)(a1 + 376) = 0;
  }
  LeaveCriticalSection(v2);
}
