/*
 * XREFs of _ValidateNewParent@8 @ 0x2FEC8
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _IsParentBandValid@8 @ 0x2FF3A (_IsParentBandValid@8.c)
 *     _ProtectedContentAccessCheck@4 @ 0x2FF9C (_ProtectedContentAccessCheck@4.c)
 *     _ValidateParentDepth@8 @ 0x34CBA (_ValidateParentDepth@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall ValidateNewParent(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // eax
  _DWORD *i; // eax

  if ( *(char *)(a1[5] + 11) < 0 || *(char *)(a2[5] + 11) < 0 || !ValidateParentDepth(a1, a2) )
  {
LABEL_16:
    UserSetLastError(87);
    return 0;
  }
  if ( ProtectedContentAccessCheck(a1) )
  {
    if ( a2[3] == a1[3] && IsParentBandValid(a1, a2) )
    {
      v4 = a2;
      while ( a1 != v4 )
      {
        v4 = (_DWORD *)v4[14];
        if ( !v4 )
        {
          for ( i = (_DWORD *)a2[16]; i; i = (_DWORD *)i[16] )
          {
            if ( a1 == i )
              goto LABEL_16;
          }
          return 1;
        }
      }
    }
    goto LABEL_16;
  }
  UserSetLastError(5);
  return 0;
}
