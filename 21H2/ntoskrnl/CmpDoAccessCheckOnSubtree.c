/*
 * XREFs of CmpDoAccessCheckOnSubtree @ 0x140871C24
 * Callers:
 *     CmDumpKey @ 0x14087BE78 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 *     CmpCheckKeyAccess @ 0x140871884 (CmpCheckKeyAccess.c)
 */

__int64 __fastcall CmpDoAccessCheckOnSubtree(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4,
        int a5)
{
  int SubKeyByNumber; // ebx
  unsigned int *TransientPoolWithTag; // rax
  void *v9; // r14
  __int64 v10; // r15
  unsigned int *v11; // rdi
  __int64 v12; // rdx
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  unsigned int v15; // r8d
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v19; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v20[2]; // [rsp+38h] [rbp-30h] BYREF

  v20[0] = -1;
  v19 = 0;
  v20[1] = 0;
  if ( (a5 & 0xFFFFFFFC) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    TransientPoolWithTag = (unsigned int *)CmpAllocateTransientPoolWithTag(PagedPool, 0x2800uLL, 0x74634D43u, a4);
    v9 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      TransientPoolWithTag[3] = 0;
      *TransientPoolWithTag = a2;
      v10 = 0LL;
      *((_BYTE *)TransientPoolWithTag + 16) = !(a5 & 1);
      v11 = TransientPoolWithTag;
      while ( 1 )
      {
        if ( !*((_BYTE *)v11 + 16) )
        {
          v12 = *v11;
          *((_BYTE *)v11 + 16) = 1;
          SubKeyByNumber = CmpCheckKeyAccess(a1, v12);
          if ( SubKeyByNumber < 0 )
            break;
        }
        v13 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *v11, v20);
        v14 = v13;
        if ( !v13 )
        {
          SubKeyByNumber = -1073741670;
          break;
        }
        v15 = v11[3];
        if ( v15 >= v13[5] + v13[6] )
        {
          v11 -= 5;
          v17 = -1LL;
        }
        else
        {
          SubKeyByNumber = CmpFindSubKeyByNumber(a1, v13, v15, &v19);
          if ( SubKeyByNumber < 0 )
            goto LABEL_19;
          v16 = v19;
          if ( v19 == -1 || (++v11[3], v11 += 5, v10 == 511) )
          {
            SubKeyByNumber = -1073741670;
            goto LABEL_19;
          }
          v11[3] = 0;
          *v11 = v16;
          v17 = 1LL;
          *((_BYTE *)v11 + 16) = 0;
        }
        v10 += v17;
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v20);
        if ( v10 < 0 )
        {
          SubKeyByNumber = 0;
          v14 = 0LL;
LABEL_19:
          if ( v14 )
            (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v20);
          break;
        }
      }
      CmpFreeTransientPoolWithTag(v9, 0x74634D43u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)SubKeyByNumber;
}
