/*
 * XREFs of CmGetVisibleMaxNameLenAndClassLen @ 0x14065F88C
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x14065F57C (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x14065F940 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x140667410 (CmpIsKeyDeleted.c)
 */

__int64 __fastcall CmGetVisibleMaxNameLenAndClassLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v7; // rbx
  _QWORD **v9; // r14
  char *NextElement; // rax
  char *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // [rsp+48h] [rbp+10h] BYREF
  int v17; // [rsp+4Ch] [rbp+14h]
  _QWORD *v18; // [rsp+58h] [rbp+20h] BYREF

  v16 = -1;
  v18 = 0LL;
  v7 = a5;
  *a4 = 0;
  v17 = 0;
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
      v9 = (_QWORD **)(a1 + 208);
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v9, &v18, 32);
        v11 = NextElement;
        if ( !NextElement )
          break;
        if ( (unsigned __int8)CmEqualTrans(*((_QWORD *)NextElement + 7), a3) )
        {
          if ( *((_DWORD *)v11 + 17) == 1 )
          {
            v12 = *((_QWORD *)v11 + 11);
            if ( !(unsigned __int8)CmpIsKeyDeleted(v12, 0LL) )
            {
              v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v12 + 32) + 8LL))(
                      *(_QWORD *)(v12 + 32),
                      *(unsigned int *)(v12 + 40),
                      &v16);
              if ( !v13 )
                return 3221225626LL;
              v14 = (unsigned __int16)*(_DWORD *)(v13 + 52);
              if ( *a4 < v14 )
                *a4 = v14;
              if ( v7 )
              {
                v15 = *(_DWORD *)(v13 + 56);
                if ( *v7 < v15 )
                  *v7 = v15;
              }
              (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v12 + 32) + 16LL))(*(_QWORD *)(v12 + 32), &v16);
            }
          }
        }
      }
    }
  }
  return 0LL;
}
