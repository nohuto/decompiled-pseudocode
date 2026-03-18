/*
 * XREFs of ?bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z @ 0x238D30
 * Callers:
 *     ?bBrushPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238BB9 (-bBrushPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bBrushPathN_8x8@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238CB1 (-bBrushPathN_8x8@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bPaintPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@KHK@Z @ 0x23A012 (-bPaintPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@KHK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?bFastFill@@YGHJPAU_POINTFIX@@PAU_RECTL@@P6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z @ 0x238ED3 (-bFastFill@@YGHJPAU_POINTFIX@@PAU_RECTL@@P6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z.c)
 *     ?bFill@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@Z2@Z @ 0x239906 (-bFill@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@Z2@Z.c)
 */

int __userpurge bEngFastFillEnum@<eax>(
        int a1@<edx>,
        EPATHOBJ *a2@<ecx>,
        struct EPATHOBJ *a3,
        struct _RECTL *a4,
        struct _RECTL *a5,
        void (__stdcall *a6)(struct _RECTL *, unsigned int, void *),
        void (__stdcall *a7)(int, struct _ROW *, unsigned int, void *),
        void *a8)
{
  bool v10; // cf
  int result; // eax
  int v12; // ecx
  ULONG count; // esi
  ULONG v14; // edi
  void (__stdcall *v15)(int, struct _ROW *, unsigned int, void *); // [esp+0h] [ebp-178h]
  void *v16; // [esp+4h] [ebp-174h]
  int v17; // [esp+10h] [ebp-168h]
  struct _PATHDATA v18; // [esp+18h] [ebp-160h] BYREF
  struct _POINTFIX *v19; // [esp+24h] [ebp-154h]
  void (__stdcall *v20)(struct _RECTL *, unsigned int, void *); // [esp+28h] [ebp-150h]
  int v21; // [esp+2Ch] [ebp-14Ch]
  _QWORD v22[40]; // [esp+30h] [ebp-148h] BYREF

  v19 = (struct _POINTFIX *)a4;
  v20 = a6;
  v10 = *((_DWORD *)a2 + 1) < 2u;
  memset(&v18, 0, sizeof(v18));
  v21 = a1;
  if ( v10 )
    return 1;
  v12 = *((_DWORD *)a2 + 2);
  *(_DWORD *)a2 &= ~8u;
  *(_DWORD *)(v12 + 52) = *(_DWORD *)(v12 + 20);
  if ( !EPATHOBJ::bEnum(a2, &v18) )
  {
    result = 1;
    if ( v18.count > 1 )
      result = bFastFill(a1, v19, a5, v20, v15, v16);
LABEL_17:
    if ( result )
      return result;
    return bFill(
             a3,
             (struct _RECTL *)v19,
             (unsigned int)v20,
             (void (__stdcall *)(struct _RECTL *, unsigned int, void *))v15,
             v16);
  }
  if ( (v18.flags & 2) == 0 && *((_DWORD *)a2 + 1) <= 0x28u )
  {
    count = v18.count;
    if ( v18.count <= 0x28 )
    {
      memcpy(v22, v18.pptfx, 8 * v18.count);
      while ( 1 )
      {
        v17 = EPATHOBJ::bEnum(a2, &v18);
        if ( (v18.flags & 1) != 0 )
          break;
        v14 = count + v18.count;
        if ( count + v18.count > 0x28 )
          break;
        memcpy(&v22[count], v18.pptfx, 8 * v18.count);
        count = v14;
        if ( !v17 )
          goto LABEL_13;
      }
      count = 0;
LABEL_13:
      if ( count )
      {
        result = bFastFill(v21, v19, a5, v20, v15, v16);
        goto LABEL_17;
      }
    }
  }
  return bFill(
           a3,
           (struct _RECTL *)v19,
           (unsigned int)v20,
           (void (__stdcall *)(struct _RECTL *, unsigned int, void *))v15,
           v16);
}
