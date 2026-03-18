/*
 * XREFs of ?GreBatchTextOutRect@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUTRECT@@K@Z @ 0x538FE
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 * Callees:
 *     ?ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z @ 0x53A9C (-ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __userpurge GreBatchTextOutRect@<eax>(
        const void *a1@<edx>,
        int *a2@<ecx>,
        struct XDCOBJ *a3,
        struct _BATCHTEXTOUTRECT *a4,
        unsigned int a5)
{
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // eax
  struct XDCOBJ *v15; // [esp+0h] [ebp-5Ch]
  struct tagRECT *v16; // [esp+4h] [ebp-58h]
  int v17; // [esp+10h] [ebp-4Ch]
  int v18; // [esp+14h] [ebp-48h]
  _DWORD v19[10]; // [esp+18h] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  memset(v19, 0, sizeof(v19));
  if ( (unsigned int)a3 < 0x28 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  qmemcpy(v19, a1, sizeof(v19));
  ms_exc.registration.TryLevel = -2;
  v6 = *a2;
  v7 = *(_DWORD *)(*a2 + 1020);
  v18 = *(_DWORD *)(v7 + 196);
  v17 = *(_DWORD *)(v7 + 200);
  if ( v18 != v19[1] )
  {
    *(_DWORD *)(v7 + 196) = v19[1];
    *(_DWORD *)(*(_DWORD *)(*a2 + 1020) + 200) = v19[9];
    *(_DWORD *)(*(_DWORD *)(*a2 + 1020) + 184) |= 0xBu;
    v6 = *a2;
  }
  v8 = *(_DWORD *)(v6 + 1020);
  v9 = *(_DWORD *)(v8 + 324);
  v10 = *(_DWORD *)(v8 + 328);
  if ( v9 != v19[7] || v10 != v19[8] )
  {
    *(_DWORD *)(v8 + 324) = v19[7];
    *(_DWORD *)(*(_DWORD *)(*a2 + 1020) + 328) = v19[8];
    *(_DWORD *)(*(_DWORD *)(*a2 + 1020) + 340) |= 0x2010u;
  }
  ExtTextOutRect(v15, v16);
  v11 = *a2;
  v12 = *(_DWORD *)(*a2 + 1020);
  if ( *(_DWORD *)(v12 + 196) != v18 )
  {
    *(_DWORD *)(v12 + 196) = v18;
    *(_DWORD *)(*(_DWORD *)(*a2 + 1020) + 200) = v17;
    *(_DWORD *)(*(_DWORD *)(*a2 + 1020) + 184) |= 0xBu;
    v11 = *a2;
  }
  v13 = *(_DWORD *)(v11 + 1020);
  if ( v9 != *(_DWORD *)(v13 + 324) || v10 != *(_DWORD *)(v13 + 328) )
  {
    *(_DWORD *)(v13 + 324) = v9;
    *(_DWORD *)(*(_DWORD *)(*a2 + 1020) + 328) = v10;
    *(_DWORD *)(*(_DWORD *)(*a2 + 1020) + 340) |= 0x2010u;
  }
  return 1;
}
