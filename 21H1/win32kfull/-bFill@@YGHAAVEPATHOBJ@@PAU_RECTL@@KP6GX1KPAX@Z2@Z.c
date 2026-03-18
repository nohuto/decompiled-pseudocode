/*
 * XREFs of ?bFill@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@Z2@Z @ 0x239906
 * Callers:
 *     ?bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z @ 0x238D30 (-bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __userpurge bFill@<eax>(
        int *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct EPATHOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        void (__stdcall *a6)(struct _RECTL *, unsigned int, void *),
        void *a7)
{
  int v7; // eax
  int v8; // edi
  unsigned int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  unsigned int v14; // edx
  int v15; // ebx
  int v16; // ecx
  unsigned int v18; // eax
  int v19; // eax
  int *v20; // eax
  unsigned int v21; // ebx
  _DWORD *v22; // edx
  _DWORD *v23; // edi
  int v24; // eax
  int v25; // ecx
  _DWORD *v26; // ecx
  int v27; // eax
  int v28; // eax
  ULONG *v29; // [esp+0h] [ebp-53Ch]
  _DWORD v30[10]; // [esp+10h] [ebp-52Ch] BYREF
  _DWORD v31[10]; // [esp+38h] [ebp-504h] BYREF
  int v32; // [esp+60h] [ebp-4DCh]
  int v33; // [esp+64h] [ebp-4D8h]
  _DWORD *v34; // [esp+68h] [ebp-4D4h]
  int v35; // [esp+6Ch] [ebp-4D0h]
  int v36; // [esp+70h] [ebp-4CCh]
  unsigned int v37; // [esp+74h] [ebp-4C8h]
  unsigned int v38; // [esp+78h] [ebp-4C4h]
  int *v39; // [esp+7Ch] [ebp-4C0h]
  size_t Size; // [esp+80h] [ebp-4BCh]
  struct _RECTL *v41; // [esp+84h] [ebp-4B8h]
  unsigned int v42; // [esp+88h] [ebp-4B4h]
  _DWORD *v43; // [esp+8Ch] [ebp-4B0h]
  unsigned int i; // [esp+90h] [ebp-4ACh]
  int v45; // [esp+94h] [ebp-4A8h]
  int v46; // [esp+98h] [ebp-4A4h] BYREF
  int v47; // [esp+9Ch] [ebp-4A0h]
  int v48; // [esp+A0h] [ebp-49Ch]
  int v49; // [esp+A4h] [ebp-498h]
  int v50; // [esp+A8h] [ebp-494h] BYREF
  int v51; // [esp+ACh] [ebp-490h]
  int v52; // [esp+B0h] [ebp-48Ch]
  int v53; // [esp+B4h] [ebp-488h]
  char v54; // [esp+B8h] [ebp-484h] BYREF
  _BYTE v55[332]; // [esp+3D8h] [ebp-164h] BYREF
  CPPEH_RECORD ms_exc; // [esp+524h] [ebp-18h]

  v43 = a2;
  v39 = a1;
  v41 = a4;
  v38 = a5;
  v42 = a5;
  memset(v31, 0, sizeof(v31));
  memset(v30, 0, sizeof(v30));
  if ( ((unsigned __int8)a3 & 1) != 0 )
  {
    v7 = a2[7];
    if ( v7 )
    {
      if ( !a1 )
      {
        ms_exc.registration.TryLevel = 0;
        ((void (__stdcall *)(int, _DWORD, unsigned int))a4)(v7, a2[8], v38);
LABEL_38:
        ms_exc.registration.TryLevel = -2;
        return 1;
      }
      v8 = 0;
      v45 = 0;
      for ( i = 0; ; ++i )
      {
        v9 = v43[8];
        v38 = i;
        if ( i >= v9 )
          break;
        v10 = v43[7];
        v50 = *(_DWORD *)(v10 + 16 * i);
        v51 = *(_DWORD *)(v10 + 16 * i + 4);
        v52 = *(_DWORD *)(v10 + 16 * i + 8);
        v53 = *(_DWORD *)(v10 + 16 * i + 12);
        if ( *v39 >= *(_DWORD *)(v10 + 16 * i)
          || v39[1] >= *(_DWORD *)(v10 + 16 * i + 4)
          || v39[2] <= *(_DWORD *)(v10 + 16 * i + 8)
          || v39[3] <= *(_DWORD *)(v10 + 16 * i + 12) )
        {
          ERECTL::operator*=(&v50, v39);
          if ( v8 )
          {
            ms_exc.registration.TryLevel = 1;
            ((void (__stdcall *)(unsigned int, int, unsigned int))v41)(v10 + 16 * (i - v8), v8, v42);
            ms_exc.registration.TryLevel = -2;
            v8 = 0;
            v45 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)&v50) )
          {
            ms_exc.registration.TryLevel = 2;
            ((void (__stdcall *)(int, int, unsigned int))v41)(v11, 1, v42);
            ms_exc.registration.TryLevel = -2;
          }
        }
        else
        {
          v45 = ++v8;
        }
      }
      if ( !v8 )
        return 1;
      ms_exc.registration.TryLevel = 3;
      ((void (__stdcall *)(unsigned int, int, unsigned int))v41)(v43[7] + 16 * (v9 - v8), v8, v42);
      goto LABEL_37;
    }
  }
  if ( ((unsigned __int8)a3 & 3) == 2 )
  {
    v12 = a2[10];
    if ( v12 )
    {
      if ( !a1 )
      {
        ms_exc.registration.TryLevel = 4;
        ((void (__stdcall *)(int, _DWORD, unsigned int))v41)(v12, a2[9], v42);
        goto LABEL_38;
      }
      v13 = 0;
      v45 = 0;
      for ( i = 0; ; ++i )
      {
        v14 = v43[9];
        if ( i >= v14 )
          break;
        v15 = v43[10];
        Size = *(_DWORD *)(v15 + 16 * i);
        if ( *v39 >= (int)Size
          || v39[1] >= *(_DWORD *)(v15 + 16 * i + 4)
          || v39[2] <= *(_DWORD *)(v15 + 16 * i + 8)
          || v39[3] <= *(_DWORD *)(v15 + 16 * i + 12) )
        {
          v50 = Size;
          v51 = *(_DWORD *)(v15 + 16 * i + 4);
          v52 = *(_DWORD *)(v15 + 16 * i + 8);
          v53 = *(_DWORD *)(v15 + 16 * i + 12);
          ERECTL::operator*=(&v50, v39);
          if ( v13 )
          {
            ms_exc.registration.TryLevel = 5;
            ((void (__stdcall *)(unsigned int, int, unsigned int))v41)(v15 + 16 * (i - v13), v13, v42);
            ms_exc.registration.TryLevel = -2;
            v13 = 0;
            v45 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)&v50) )
          {
            ms_exc.registration.TryLevel = 6;
            ((void (__stdcall *)(int, int, unsigned int))v41)(v16, 1, v42);
            ms_exc.registration.TryLevel = -2;
          }
        }
        else
        {
          v45 = ++v13;
        }
      }
      if ( !v13 )
        return 1;
      ms_exc.registration.TryLevel = 7;
      ((void (__stdcall *)(unsigned int, int, unsigned int))v41)(v43[10] + 16 * (v14 - v13), v13, v42);
LABEL_37:
      ms_exc.registration.TryLevel = -2;
      return 1;
    }
  }
  v18 = v43[1];
  if ( v18 > 0x14 )
  {
    Size = 0;
    if ( ULongLongToULong(40LL * v18, v29) < 0 )
      return 0;
    Size = (size_t)PALLOCMEM2(Size, 1734632775, 0);
    if ( !Size )
      return 0;
    v19 = 1;
  }
  else
  {
    Size = (size_t)&v54;
    v19 = 0;
  }
  v33 = v19;
  i = (unsigned int)v55;
  v45 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  if ( v39 )
  {
    v50 = *v39;
    v51 = v39[1];
    v52 = v39[2];
    v53 = v39[3];
    v47 = 16 * v39[1];
    v49 = 16 * v39[3];
    v20 = &v46;
  }
  else
  {
    v20 = 0;
  }
  v34 = v30;
  v32 = bConstructGET(v43, v30, Size, v20);
  if ( v32 )
  {
    v21 = 0x80000000;
    v43 = v31;
    v22 = v31;
    v31[0] = v31;
    v31[3] = 0;
    v31[2] = 0x7FFFFFFF;
LABEL_50:
    v37 = v21;
    if ( v22 == v43 || (vAdvanceAETEdges(v31), v22 = (_DWORD *)v31[0], (_DWORD *)v31[0] == v43) )
    {
      if ( (_DWORD *)v30[0] == v34 )
      {
        if ( v45 )
        {
          ms_exc.registration.TryLevel = 9;
          ((void (__stdcall *)(_BYTE *, int, unsigned int))v41)(v55, v45, v42);
          ms_exc.registration.TryLevel = -2;
        }
        goto LABEL_55;
      }
      v21 = *(_DWORD *)(v30[0] + 12);
      v37 = v21;
    }
    else if ( *(_DWORD **)v31[0] != v43 )
    {
      vXSortAETEdges(v31);
      v22 = (_DWORD *)v31[0];
    }
    if ( *(_DWORD *)(v30[0] + 12) == v21 )
    {
      vMoveNewEdges(v30, v31, v21);
      v22 = (_DWORD *)v31[0];
    }
    v23 = v22;
    while ( 1 )
    {
      v24 = v23[2];
      v35 = v24;
      if ( ((unsigned __int8)a3 & 2) != 0 )
      {
        v25 = v23[9];
        do
        {
          v23 = (_DWORD *)*v23;
          v25 += v23[9];
        }
        while ( v25 );
      }
      else
      {
        v23 = (_DWORD *)*v23;
      }
      v38 = (unsigned int)v23;
      if ( v24 < v23[2] )
        break;
LABEL_81:
      v23 = (_DWORD *)*v23;
      if ( v23 == v43 )
      {
        ++v21;
        goto LABEL_50;
      }
    }
    if ( v39 )
    {
      if ( v24 < v50 )
      {
        v24 = v50;
        v35 = v50;
      }
      v26 = (_DWORD *)i;
      *(_DWORD *)i = v24;
      v27 = v23[2];
      v36 = v27;
      if ( v27 > v52 )
      {
        v27 = v52;
        v36 = v52;
      }
      v26[2] = v27;
      v26[1] = v21;
      v26[3] = v21 + 1;
      v28 = v45;
      if ( v35 >= v36 )
        goto LABEL_79;
    }
    else
    {
      v26 = (_DWORD *)i;
      *(_DWORD *)i = v24;
      v26[2] = v23[2];
      v26[1] = v21;
      v26[3] = v21 + 1;
      v28 = v45;
    }
    ++v28;
    i = (unsigned int)(v26 + 4);
    v45 = v28;
LABEL_79:
    if ( v28 == 20 )
    {
      ms_exc.registration.TryLevel = 8;
      ((void (__stdcall *)(_BYTE *, int, unsigned int))v41)(v55, 20, v42);
      ms_exc.registration.TryLevel = -2;
      i = (unsigned int)v55;
      v45 = 0;
      v22 = (_DWORD *)v31[0];
    }
    goto LABEL_81;
  }
LABEL_55:
  if ( v33 )
    Win32FreePool((PATHOBJ *)Size);
  return v32;
}
