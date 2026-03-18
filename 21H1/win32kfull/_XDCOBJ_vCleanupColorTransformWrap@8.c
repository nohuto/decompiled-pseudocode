/*
 * XREFs of _XDCOBJ_vCleanupColorTransformWrap@8 @ 0x98390
 * Callers:
 *     <none>
 * Callees:
 *     ?bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0x1F4909 (-bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 */

int __stdcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1, int a2)
{
  int result; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  int v5; // [esp+Ch] [ebp-4h] BYREF

  result = *(_DWORD *)a1;
  v3 = *(_DWORD **)(*(_DWORD *)a1 + 1820);
  while ( v3 )
  {
    result = HmgShareLockCheck(*v3, 14);
    v5 = result;
    v4 = v3;
    if ( result )
    {
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)&v5, a1, a2);
      result = v5;
    }
    v3 = *(_DWORD **)(*(_DWORD *)a1 + 1820);
    if ( v3 == v4 )
    {
      v3 = (_DWORD *)v3[1];
      *(_DWORD *)(*(_DWORD *)a1 + 1820) = v3;
    }
    if ( result )
      result = DEC_SHARE_REF_CNT(result);
  }
  return result;
}
