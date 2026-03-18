/*
 * XREFs of ?bSendLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAH@Z @ 0x20FDCC
 * Callers:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _ULongSub@12 @ 0x145E8B (_ULongSub@12.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?UMPDAllocUserMem@UMPDOBJ@@QAEPAXK@Z @ 0x20AAEE (-UMPDAllocUserMem@UMPDOBJ@@QAEPAXK@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QBEKXZ @ 0x210133 (-ulGetMaxSize@UMPDOBJ@@QBEKXZ.c)
 */

int __thiscall UMPDOBJ::bSendLargeBitmap(UMPDOBJ *this, struct _SURFOBJ *a2, int *a3)
{
  int v3; // esi
  unsigned int v5; // ecx
  char *v6; // ecx
  char *v7; // eax
  char *KernelPtr; // eax
  char *v9; // eax
  int v10; // eax
  char *v11; // eax
  int v12; // eax
  ULONG cjBits; // [esp-4h] [ebp-54h]
  ULONG v15; // [esp+0h] [ebp-50h]
  ULONG *v16; // [esp+4h] [ebp-4Ch]
  char *v17; // [esp+10h] [ebp-40h]
  ULONG ulMinuend; // [esp+14h] [ebp-3Ch] BYREF
  int v19; // [esp+18h] [ebp-38h] BYREF
  int v20; // [esp+1Ch] [ebp-34h]
  void *Src; // [esp+20h] [ebp-30h]
  char *v22; // [esp+24h] [ebp-2Ch]
  int *v23; // [esp+28h] [ebp-28h]
  _DWORD v24[5]; // [esp+2Ch] [ebp-24h] BYREF
  char *v25; // [esp+40h] [ebp-10h]
  unsigned int v26; // [esp+44h] [ebp-Ch]
  size_t MaxCount; // [esp+48h] [ebp-8h]

  v3 = 0;
  v23 = a3;
  v19 = 0;
  ulMinuend = 0;
  cjBits = a2->cjBits;
  v20 = 0;
  v24[2] = 0;
  v24[3] = 0;
  v25 = 0;
  MaxCount = 0;
  v5 = UMPDOBJ::UMPDAllocUserMem(this, cjBits);
  v22 = (char *)v5;
  if ( !v5 )
    return 0;
  v24[4] = *(_DWORD *)this;
  v26 = v5;
  v24[0] = 32;
  v24[1] = 118;
  UMPDOBJ::ulGetMaxSize(this);
  if ( ULongSub((ULONG)&ulMinuend, v15, v16) < 0 )
    return 0;
  v6 = (char *)a2->cjBits;
  v17 = v6;
  Src = a2->pvBits;
  while ( v6 )
  {
    if ( (unsigned int)v6 > ulMinuend )
      v6 = (char *)ulMinuend;
    MaxCount = (size_t)v6;
    v7 = UMPDOBJ::_AllocUserMem(this, v6, 0);
    v25 = v7;
    if ( !v7
      || (KernelPtr = UMPDOBJ::GetKernelPtr(this, v7),
          memcpy(KernelPtr, Src, MaxCount),
          UMPDOBJ::Thunk(this, v24, 0x20u, &v19, (char *)4) == -1) )
    {
      v6 = v17;
      break;
    }
    v6 = v17;
    if ( !v19 )
      break;
    v6 = &v17[-MaxCount];
    v26 = (unsigned int)&v22[MaxCount + v20];
    v9 = (char *)a2->pvBits + MaxCount + v20;
    v20 += MaxCount;
    Src = v9;
    v10 = *((_DWORD *)this + 52);
    v17 -= MaxCount;
    if ( v10 )
      *(_DWORD *)(v10 + 28) = 0;
  }
  v11 = &v22[(char *)a2->pvScan0 - (char *)a2->pvBits];
  a2->pvBits = v22;
  a2->pvScan0 = v11;
  if ( v6 )
  {
    v12 = *((_DWORD *)this + 52);
    if ( v12 )
      *(_DWORD *)(v12 + 28) = 0;
    UMPDOBJ::bDeleteLargeBitmaps(this, a2, 0, 0);
  }
  else
  {
    v3 = 1;
    *v23 = 1;
  }
  return v3;
}
