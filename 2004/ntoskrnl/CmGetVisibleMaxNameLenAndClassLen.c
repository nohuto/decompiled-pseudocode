/*
 * XREFs of CmGetVisibleMaxNameLenAndClassLen @ 0x1406544E0
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1406541D0 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x140670220 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpIsKeyDeleted @ 0x14063FC08 (CmpIsKeyDeleted.c)
 *     CmEqualTrans @ 0x140643290 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140654660 (CmListGetNextElement.c)
 */

__int64 __fastcall CmGetVisibleMaxNameLenAndClassLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v7; // rbx
  __int64 v9; // r14
  __int64 NextElement; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // [rsp+48h] [rbp+10h] BYREF
  int v19; // [rsp+4Ch] [rbp+14h]
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  v18 = -1;
  v20 = 0LL;
  v7 = a5;
  *a4 = 0;
  v19 = 0;
  if ( v7 )
    *v7 = 0;
  if ( a2 )
  {
    *a4 = (unsigned __int16)*(_DWORD *)(a2 + 52);
    if ( v7 )
      *v7 = *(_DWORD *)(a2 + 56);
  }
  if ( a1 )
  {
    *a4 = *(unsigned __int16 *)(a1 + 176);
    if ( a3 )
    {
      v9 = a1 + 208;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v9, &v20, 32LL);
        v11 = NextElement;
        if ( !NextElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a3) )
        {
          if ( *(_DWORD *)(v11 + 68) == 1 )
          {
            v14 = *(_QWORD *)(v11 + 88);
            if ( !CmpIsKeyDeleted(v14, 0LL, v12, v13) )
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v14 + 32) + 8LL))(
                      *(_QWORD *)(v14 + 32),
                      *(unsigned int *)(v14 + 40),
                      &v18);
              if ( !v15 )
                return 3221225626LL;
              v16 = (unsigned __int16)*(_DWORD *)(v15 + 52);
              if ( *a4 < v16 )
                *a4 = v16;
              if ( v7 )
              {
                v17 = *(_DWORD *)(v15 + 56);
                if ( *v7 < v17 )
                  *v7 = v17;
              }
              (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v14 + 32) + 16LL))(*(_QWORD *)(v14 + 32), &v18);
            }
          }
        }
      }
    }
  }
  return 0LL;
}
