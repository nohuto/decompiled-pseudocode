/*
 * XREFs of _NtGdiXFORMOBJ_bApplyXform@20 @ 0x21B239
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _XFORMOBJ_bApplyXform@20 @ 0x1F32FA (_XFORMOBJ_bApplyXform@20.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU1@@Z @ 0x216082 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU1@@Z.c)
 *     ?bSafeCopyBits@@YGHPAX0K@Z @ 0x216D5F (-bSafeCopyBits@@YGHPAX0K@Z.c)
 *     ?bSafeReadBits@@YGHPAX0K@Z @ 0x216DC3 (-bSafeReadBits@@YGHPAX0K@Z.c)
 */

int __userpurge NtGdiXFORMOBJ_bApplyXform@<eax>(void *a1@<edi>, int a2, ULONG iMode, ULONG a4, char *a5, char *a6)
{
  int v6; // esi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v11; // edi
  PATHOBJ *v12; // eax
  PATHOBJ *p_pvOut; // ebx
  bool v14; // zf
  void *v16; // [esp-4h] [ebp-68h]
  unsigned int v17; // [esp+0h] [ebp-64h]
  unsigned int v18; // [esp+0h] [ebp-64h]
  XFORMOBJ *pxo; // [esp+8h] [ebp-5Ch]
  int Size; // [esp+18h] [ebp-4Ch]
  PATHOBJ *pvIn; // [esp+1Ch] [ebp-48h]
  char pvOut; // [esp+20h] [ebp-44h] BYREF
  _BYTE v23[32]; // [esp+40h] [ebp-24h] BYREF

  v6 = 0;
  if ( a4 > 0x4E2000 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    pxo = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(ThreadCurrentObj, a2);
    if ( !pxo || !a5 || !a6 || !a4 )
    {
LABEL_22:
      if ( v11 )
        --*((_DWORD *)v11 + 57);
      return v6;
    }
    Size = 8 * a4;
    if ( a4 > 4 )
    {
      pvIn = (PATHOBJ *)PALLOCMEM2(8 * a4, 1886221639, 0);
      p_pvOut = (PATHOBJ *)PALLOCMEM2(Size, 1886221639, 0);
      v12 = pvIn;
      if ( !pvIn || !p_pvOut )
      {
LABEL_17:
        if ( a4 > 4 )
        {
          if ( v12 )
            Win32FreePool(v12);
          if ( p_pvOut )
            Win32FreePool(p_pvOut);
        }
        goto LABEL_22;
      }
    }
    else
    {
      v12 = (PATHOBJ *)v23;
      pvIn = (PATHOBJ *)v23;
      p_pvOut = (PATHOBJ *)&pvOut;
    }
    v14 = bSafeReadBits(a5, v12, Size, a1, v17) == 0;
    v12 = pvIn;
    if ( !v14 )
    {
      if ( XFORMOBJ_bApplyXform(pxo, iMode, a4, pvIn, p_pvOut) && bSafeCopyBits(p_pvOut, a6, Size, v16, v18) )
        v6 = 1;
      v12 = pvIn;
    }
    goto LABEL_17;
  }
  return v6;
}
