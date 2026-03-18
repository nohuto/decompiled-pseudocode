/*
 * XREFs of ?vSrcTranCopyS8D16New@@YGXPAEJJ0JJJJKKPAVSURFACE@@P6GXPBE00JPAPAG@Z0@Z @ 0x1D5304
 * Callers:
 *     _vSrcTranCopyS8D16@44 @ 0xFB1F4 (_vSrcTranCopyS8D16@44.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z @ 0x83544 (-pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ulBlendPixelCT @ 0x1D4F15 (ulBlendPixelCT.c)
 */

void __userpurge vSrcTranCopyS8D16New(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned __int8 *a3,
        int a4,
        int a5,
        unsigned __int8 *a6,
        int a7,
        int a8,
        struct SURFACE *a9,
        int a10,
        void **a11,
        void (__stdcall *a12)(_BYTE *, unsigned __int16 *, struct SURFACE *, unsigned __int8 *, int *),
        struct SURFACE *a13,
        void (__stdcall *a14)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **),
        unsigned __int8 *a15)
{
  int v17; // edi
  _BYTE *v18; // esi
  unsigned __int16 *v19; // ebx
  int v20; // eax
  _WORD *v21; // edi
  unsigned __int8 *v22; // eax
  _BYTE *v23; // ecx
  int v24; // edx
  __int16 v25; // ax
  struct _BLENDINFO *v26; // [esp+0h] [ebp-7Ch]
  int v27; // [esp+4h] [ebp-78h]
  unsigned int v28[14]; // [esp+10h] [ebp-6Ch] BYREF
  HSEMAPHORE v29; // [esp+48h] [ebp-34h] BYREF
  _BYTE *v30; // [esp+4Ch] [ebp-30h]
  _WORD *v31; // [esp+50h] [ebp-2Ch]
  int v32; // [esp+54h] [ebp-28h]
  struct _BLENDINFO *v33; // [esp+58h] [ebp-24h]
  _BYTE *v34; // [esp+5Ch] [ebp-20h]
  unsigned __int8 *v35; // [esp+60h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v17 = a5;
  a6 -= a5;
  memset(v28, 0, sizeof(v28));
  v29 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  ms_exc.registration.TryLevel = 0;
  v18 = (_BYTE *)(a1 + a2);
  v30 = v18;
  v19 = (unsigned __int16 *)(a4 + 2 * v17);
  v33 = (struct _BLENDINFO *)*v19;
  a11 = (void **)pvFillOpaqTableCT(a9, v33, a11, (struct SURFACE *)v28, (struct SURFACE *)1, v26, v27);
  v20 = a8;
  while ( v20 )
  {
    v34 = v18;
    v21 = v19;
    v31 = v19;
    v35 = a6;
    a5 = 0;
    a12(v18, v19, a13, a6, &a5);
    v22 = v35;
    v23 = v18;
    while ( v22 )
    {
      v24 = (unsigned __int8)*v23;
      if ( *v23 )
      {
        v32 = *(unsigned __int16 *)a5;
        if ( (struct _BLENDINFO *)v32 == v33 )
        {
          v25 = *((_WORD *)a11 + v24);
        }
        else if ( v24 == 114 )
        {
          v25 = (__int16)a9;
        }
        else
        {
          v25 = ulBlendPixelCT(v28, v32, (unsigned __int8 *)off_266024 + 4 * v24);
          v23 = v34;
        }
        *v21 = v25;
        v22 = v35;
      }
      v35 = --v22;
      v31 = ++v21;
      v34 = ++v23;
      a5 += 2;
    }
    v20 = --a8;
    v18 = &v18[(_DWORD)a3];
    v30 = v18;
    v19 = (unsigned __int16 *)((char *)v19 + a7);
  }
  ms_exc.registration.TryLevel = -2;
  SEMOBJ::vUnlock((SEMOBJ *)&v29);
}
