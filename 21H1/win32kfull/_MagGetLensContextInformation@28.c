/*
 * XREFs of _MagGetLensContextInformation@28 @ 0x13CB12
 * Callers:
 *     _MagSlicerControl@24 @ 0x13DD42 (_MagSlicerControl@24.c)
 *     _NtUserMagGetContextInformation@16 @ 0x16642C (_NtUserMagGetContextInformation@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?MagpFindLensContext@@YGPAU_MAG_LENS_CONTEXT@@PAU_MAG_THREAD_CONTEXT@@PAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x13C834 (-MagpFindLensContext@@YGPAU_MAG_LENS_CONTEXT@@PAU_MAG_THREAD_CONTEXT@@PAUtagWND@@W4_MAG_LENS_CON.c)
 *     __GetMagnificationInputTransform@4 @ 0x178F35 (__GetMagnificationInputTransform@4.c)
 *     _DwmSyncMagnUpdateWindowSharedTextures@44 @ 0x1D2D8F (_DwmSyncMagnUpdateWindowSharedTextures@44.c)
 */

int __fastcall MagGetLensContextInformation(
        _DWORD **a1,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        void **a6,
        unsigned int *a7)
{
  NTSTATUS updated; // esi
  _DWORD *v8; // edi
  _DWORD *LensContext; // eax
  _DWORD *v11; // eax
  const void *v12; // esi
  void **v13; // edi
  int v14; // ecx
  _DWORD *v15; // eax
  _DWORD *v16; // edx
  void *v17; // ecx
  void *v18; // eax
  unsigned int v19; // esi
  unsigned int i; // ecx
  _DWORD *v21; // edx
  unsigned int v22; // edi
  int v23; // esi
  unsigned int v24; // ecx
  int v25; // eax
  void **v26; // esi
  void **v27; // edi
  char *v28; // eax
  char *v29; // ecx
  int v30; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v33; // esi
  void **v34; // ebx
  void *v35; // edi
  void *v36; // ecx
  _DWORD *v37; // eax
  _DWORD *v38; // eax
  char *v39; // [esp+10h] [ebp-20h]
  unsigned int v40; // [esp+14h] [ebp-1Ch]
  int v41; // [esp+14h] [ebp-1Ch]
  unsigned int v42; // [esp+18h] [ebp-18h] BYREF
  int v43; // [esp+1Ch] [ebp-14h]
  int v44; // [esp+20h] [ebp-10h]
  _DWORD v45[3]; // [esp+24h] [ebp-Ch] BYREF

  updated = -1073741811;
  v8 = *a1;
  v45[2] = 0;
  while ( v8 != a1 )
  {
    if ( a2 == v8[2] )
      goto LABEL_6;
    v8 = (_DWORD *)*v8;
  }
  v8 = 0;
LABEL_6:
  if ( !v8 )
    return -1073741661;
  switch ( a5 )
  {
    case 2:
      if ( a3 )
      {
        if ( a3 == (_DWORD *)-1 && (LensContext = *(_DWORD **)(*(_DWORD *)(v8[2] + 248) + 132)) != 0
          || (LensContext = MagpFindLensContext((int)v8, (int)a3, a4)) != 0 )
        {
          *a6 = (void *)LensContext[14];
          a6[1] = (void *)LensContext[15];
          a6[2] = (void *)LensContext[16];
          a6[3] = (void *)LensContext[17];
          return 0;
        }
      }
      return updated;
    case 3:
      if ( a3 )
      {
        if ( a3 == (_DWORD *)-1 && (v11 = *(_DWORD **)(*(_DWORD *)(v8[2] + 248) + 132)) != 0
          || (v11 = MagpFindLensContext((int)v8, (int)a3, a4)) != 0 )
        {
          v12 = v11 + 18;
          v13 = a6;
          v14 = 8;
          if ( (v11[2] & 2) == 0 )
            v12 = &gMagOutTransformIdentity;
          goto LABEL_20;
        }
      }
      return updated;
    case 4:
      return _GetMagnificationInputTransform(a6) != 0 ? 0 : -1073741823;
    case 5:
      if ( a3 )
      {
        if ( a3 == (_DWORD *)-1 && (v15 = *(_DWORD **)(*(_DWORD *)(v8[2] + 248) + 136)) != 0
          || (v15 = MagpFindLensContext((int)v8, (int)a3, a4)) != 0 )
        {
          v12 = v15 + 26;
          v13 = a6;
          v14 = 25;
          if ( (v15[2] & 4) == 0 )
            v12 = &gMagEffectIdentity;
LABEL_20:
          qmemcpy(v13, v12, 4 * v14);
          return 0;
        }
      }
      return updated;
    case 6:
      if ( a3 )
      {
        if ( a3 != (_DWORD *)-1 )
        {
          v16 = MagpFindLensContext((int)v8, (int)a3, a4);
          if ( v16 )
          {
            v42 = *a7;
            if ( v42 < 8 )
              return -1073741820;
            v17 = (void *)v16[51];
            *a6 = v17;
            v18 = (void *)v16[52];
            a6[1] = v18;
            v19 = (unsigned int)v17 + (_DWORD)v18;
            v40 = 4 * ((int)v17 + (_DWORD)v18);
            if ( v42 - 8 < v40 )
              return -1073741820;
            for ( i = 0; i < v19; ++i )
              a6[i + 2] = *(void **)(v16[53] + 4 * i);
            *a7 = v40 + 8;
            return 0;
          }
        }
      }
      return updated;
    case 7:
      if ( a3 )
      {
        if ( a3 != (_DWORD *)-1 )
        {
          v21 = MagpFindLensContext((int)v8, (int)a3, a4);
          if ( v21 )
          {
            v22 = *a7;
            if ( *a7 < 0x10 )
              return -1073741820;
            v23 = v21[54];
            *a6 = (void *)v23;
            a6[1] = (void *)v21[55];
            a6[2] = (void *)v21[56];
            a6[3] = (void *)v21[57];
            if ( v22 - 16 < 16 * v23 )
              return -1073741820;
            v24 = 0;
            if ( v23 )
            {
              v25 = 0;
              do
              {
                v26 = (void **)(v25 * 4 + v21[58]);
                v27 = &a6[v25 + 4];
                ++v24;
                v25 += 4;
                *v27 = *v26++;
                *++v27 = *v26++;
                *++v27 = *v26;
                v27[1] = v26[1];
                v23 = (int)*a6;
              }
              while ( v24 < (unsigned int)*a6 );
            }
            *a7 = 16 * (v23 + 1);
            return 0;
          }
        }
      }
      return updated;
    case 8:
      v42 = 0;
      if ( !a3 )
        return updated;
      if ( a3 == (_DWORD *)-1 )
        return updated;
      v28 = (char *)MagpFindLensContext((int)v8, (int)a3, a4);
      v29 = v28;
      v39 = v28;
      if ( !v28 )
        return updated;
      v30 = *((_DWORD *)v28 + 2);
      updated = 0;
      v43 = (*((_DWORD *)v29 + 2) >> 6) & 1;
      if ( (v30 & 0x20) != 0 || !*((_DWORD *)v29 + 54) )
      {
        v34 = a6;
        *a6 = 0;
        a6[2] = 0;
        a6[10] = 0;
        a6[1] = (void *)*((_DWORD *)v29 + 54);
        a6[3] = (void *)*((_DWORD *)v29 + 55);
        a6[4] = (void *)*((_DWORD *)v29 + 56);
        a6[5] = (void *)*((_DWORD *)v29 + 57);
LABEL_75:
        if ( v29[8] < 0 )
          v34[12] = (void *)v42;
        return updated;
      }
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v45[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v45;
      v45[1] = a3;
      HMLockObject(a3);
      v41 = ReferenceDwmProcess();
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      v33 = ReferenceDwmApiPort();
      v44 = v33;
      UserSessionSwitchLeaveCrit();
      v34 = a6;
      if ( v33 && v41 )
      {
        updated = DwmSyncMagnUpdateWindowSharedTextures(
                    v44,
                    v41,
                    *a3,
                    ***(_DWORD ***)(*(_DWORD *)(v8[2] + 248) + 4),
                    v39 + 16,
                    a6[6],
                    a6[7],
                    v43,
                    (*((_DWORD *)v39 + 2) >> 7) & 1,
                    a6,
                    &v42);
      }
      else
      {
        DereferenceDwmApiPort(v33);
        updated = -1073741823;
      }
      EnterCrit(0, 1);
      ThreadUnlock1();
      DereferenceDwmProcess(v41);
      if ( updated < 0 )
        return updated;
      v29 = v39;
      updated = 0;
      if ( (int)*a6 < 0 )
        goto LABEL_69;
      if ( a6[1] == *((void **)v39 + 54)
        && a6[3] == *((void **)v39 + 55)
        && a6[4] == *((void **)v39 + 56)
        && a6[5] == *((void **)v39 + 57) )
      {
        if ( a6[2] )
        {
          v35 = a6[10];
          if ( v35 )
          {
            a6[10] = 0;
            updated = ObOpenObjectByPointer(v35, 0x80u, 0, 4u, _MmSectionObjectType, 1, a6 + 10);
            ObfDereferenceObject(v35);
            if ( updated < 0 )
              return updated;
            v29 = v39;
            updated = 0;
          }
        }
LABEL_69:
        if ( *a7 < 0x30 )
          return -1073741820;
        goto LABEL_75;
      }
      v36 = a6[10];
      if ( v36 )
      {
        ObfDereferenceObject(v36);
        a6[10] = 0;
      }
      return -1073741811;
    case 9:
      if ( a3 )
      {
        if ( a3 != (_DWORD *)-1 )
        {
          v37 = MagpFindLensContext((int)v8, (int)a3, a4);
          if ( v37 )
          {
            *a6 = 0;
            if ( (v37[2] & 0x40) != 0 )
              *a6 = (void *)1;
            return 0;
          }
        }
      }
      return updated;
    case 10:
      if ( a3 )
      {
        v38 = MagpFindLensContext((int)v8, (int)a3, a4);
        if ( v38 )
        {
          *a6 = (void *)v38[59];
          return 0;
        }
      }
      return updated;
    default:
      return updated;
  }
}
