/*
 * XREFs of sub_180010BC0 @ 0x180010BC0
 * Callers:
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_18000FB0C @ 0x18000FB0C (sub_18000FB0C.c)
 *     sub_180010800 @ 0x180010800 (sub_180010800.c)
 *     sub_180010E60 @ 0x180010E60 (sub_180010E60.c)
 *     sub_1800110E4 @ 0x1800110E4 (sub_1800110E4.c)
 *     sub_18001A9A8 @ 0x18001A9A8 (sub_18001A9A8.c)
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 */

void __fastcall sub_180010BC0(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5, int a6)
{
  unsigned int i; // ebp
  BOOL v11; // edi
  int v12; // esi
  int v13; // edi
  const wchar_t *v14; // rax
  __int64 v15; // r10
  struct _TP_TIMER *v16; // rcx
  _FILETIME pftDueTime; // [rsp+30h] [rbp-28h] BYREF

  for ( i = a5; i; i >>= 3 )
  {
    v11 = 0;
    switch ( i & 7 )
    {
      case 1u:
        v12 = *(_DWORD *)(a1 + 216);
        *(_DWORD *)(a1 + 216) = a3;
        LOBYTE(v11) = v12 == 0;
        v13 = (a3 == 0) ^ v11;
        if ( v12 == a3 )
          goto LABEL_28;
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 4u )
        {
          v14 = (const wchar_t *)sub_18001A9A8(a3);
          sub_18000FB0C(*(_QWORD *)(v15 + 16), 0xDu, &stru_180043390, *(const wchar_t **)(a1 + 24), v14);
        }
        if ( v12 == a3 )
        {
LABEL_28:
          if ( a6 )
            sub_180010800(a1, 3u);
        }
        else
        {
          if ( v13 )
            sub_18001E454(qword_18004FE78, *(unsigned int *)(a1 + 212), 3LL);
          sub_180010800(a1, 3u);
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
          *(_DWORD *)(a1 + 272) = 1;
          if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
            && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
            && *((_BYTE *)off_18004F000 + 25) >= 4u )
          {
            sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0x15u, &stru_180043390);
          }
          v16 = *(struct _TP_TIMER **)(a1 + 264);
          pftDueTime.dwHighDateTime = -1;
          pftDueTime.dwLowDateTime = -4400000;
          SetThreadpoolTimer(v16, &pftDueTime, 0, 0);
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
        }
        break;
      case 2u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
        *(_DWORD *)(a1 + 324) = a2;
        if ( a2 < *(_DWORD *)(a1 + 328) )
          v11 = *(_DWORD *)(a1 + 272) != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
        if ( !v11 )
          sub_180010E60(a1);
        break;
      case 3u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
        *(_DWORD *)(a1 + 380) = a4;
        if ( a4 == 1 )
          v11 = *(_DWORD *)(a1 + 272) != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
        if ( !v11 )
          sub_1800110E4(a1);
        break;
      case 4u:
        Sleep(0xAu);
        break;
    }
  }
}
