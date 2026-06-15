/*
 * XREFs of sub_180001830 @ 0x180001830
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800018F8 @ 0x1800018F8 (sub_1800018F8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_180001830(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 40LL, &unk_18015E3E8, a1);
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v9 = *(_QWORD *)(a1 + 192);
  if ( v9 && *(_DWORD *)(a1 + 184) )
  {
    v10 = sub_1800018F8(v9, a2, a3, a4);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v11 = 0;
      goto LABEL_7;
    }
    v13 = (unsigned int)v10;
    v14 = 2492LL;
  }
  else
  {
    v11 = -2004287487;
    v14 = 2491LL;
    v13 = 2290679809LL;
  }
  sub_18004BD84(retaddr, v14, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v13);
LABEL_7:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v11;
}
