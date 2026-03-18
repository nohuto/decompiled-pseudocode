/*
 * XREFs of RenderNineGrid @ 0x50852
 * Callers:
 *     xxEngNineGrid @ 0x504A8 (xxEngNineGrid.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     RenderNineGridInternal @ 0x50CC0 (RenderNineGridInternal.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __fastcall RenderNineGrid(
        int a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        _DWORD *a7,
        int a8,
        _BYTE *a9,
        _DWORD *a10,
        int a11)
{
  _DWORD *v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  PKTHREAD (__stdcall *v16)(); // edi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v18; // eax
  PKTHREAD v19; // eax
  PKTHREAD v20; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  int (__stdcall *v23)(int, int, int, int, _DWORD *, int *, int *, struct _SURFOBJ *, int, int, int); // eax
  PKTHREAD v25; // eax
  PKTHREAD v26; // eax
  PKTHREAD v27; // eax
  PKTHREAD v28; // eax
  __int16 v29; // ax
  PKTHREAD (__stdcall *v30)(); // edi
  PKTHREAD v31; // eax
  PKTHREAD v32; // eax
  PKTHREAD v33; // eax
  PKTHREAD v34; // eax
  PKTHREAD v35; // eax
  PKTHREAD v36; // eax
  int (__stdcall *v37)(int, int, int, int, _DWORD *, int *, _DWORD, _DWORD, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *); // ecx
  PKTHREAD v38; // eax
  PKTHREAD v39; // eax
  PKTHREAD v40; // eax
  PKTHREAD v41; // eax
  PKTHREAD (__stdcall *v42)(); // edi
  PKTHREAD v43; // eax
  PKTHREAD v44; // eax
  PKTHREAD v45; // eax
  PKTHREAD v46; // eax
  PKTHREAD v47; // eax
  PKTHREAD v48; // eax
  int (__stdcall *v49)(int, int, int, int, _DWORD *, POINTL *, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *, int, int, int, int, int, int, int, int, int, DWORD, EXCEPTION_POINTERS *, struct _EH3_EXCEPTION_REGISTRATION *); // eax
  PKTHREAD v50; // eax
  PKTHREAD v51; // eax
  PKTHREAD v52; // eax
  PKTHREAD v53; // eax
  struct _SURFOBJ *v54; // [esp+0h] [ebp-94h]
  int v55; // [esp+4h] [ebp-90h]
  int v56; // [esp+8h] [ebp-8Ch]
  int v57; // [esp+Ch] [ebp-88h]
  int v58; // [esp+10h] [ebp-84h] BYREF
  int v59; // [esp+14h] [ebp-80h]
  int v60; // [esp+18h] [ebp-7Ch]
  int v61; // [esp+1Ch] [ebp-78h]
  int v62; // [esp+20h] [ebp-74h]
  int v63; // [esp+24h] [ebp-70h]
  int v64; // [esp+28h] [ebp-6Ch]
  int v65; // [esp+2Ch] [ebp-68h]
  _DWORD *v66; // [esp+30h] [ebp-64h]
  int v67; // [esp+34h] [ebp-60h]
  int v68; // [esp+38h] [ebp-5Ch]
  _DWORD *v69; // [esp+3Ch] [ebp-58h]
  int v70; // [esp+40h] [ebp-54h]
  int v71; // [esp+44h] [ebp-50h]
  int v72; // [esp+48h] [ebp-4Ch]
  _DWORD *v73; // [esp+4Ch] [ebp-48h]
  int v74; // [esp+50h] [ebp-44h]
  _DWORD *v75; // [esp+54h] [ebp-40h]
  int v76; // [esp+58h] [ebp-3Ch] BYREF
  int v77; // [esp+5Ch] [ebp-38h]
  int v78; // [esp+60h] [ebp-34h]
  int v79; // [esp+64h] [ebp-30h]
  int v80; // [esp+68h] [ebp-2Ch] BYREF
  int v81; // [esp+6Ch] [ebp-28h]
  int v82; // [esp+70h] [ebp-24h]
  int v83; // [esp+74h] [ebp-20h]
  int v84; // [esp+78h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+7Ch] [ebp-18h]

  v64 = a2;
  v63 = a1;
  v62 = a1;
  v74 = a3;
  v71 = a4;
  v75 = a5;
  v72 = a6;
  v12 = a7;
  v66 = a7;
  v65 = a8;
  v73 = a9;
  v69 = a10;
  if ( a11 && (*a9 & 0x10) != 0 )
  {
    v13 = 1;
    v70 = 1;
  }
  else
  {
    v13 = 0;
    v70 = 0;
  }
  v68 = *a5;
  v80 = v68;
  v81 = a5[1];
  v67 = a5[2];
  v82 = v67;
  v83 = a5[3];
  if ( v13 )
  {
    v14 = a7[2];
    v15 = *a7;
    v82 = v14 + *a7 - v68;
    v80 = v14 + v15 - v67;
    v13 = v70;
    v12 = v66;
  }
  ms_exc.registration.TryLevel = 0;
  RenderNineGridInternal(v74, v64, &v80, v12, v65, v73, v69, v13);
  ms_exc.registration.TryLevel = -2;
  v76 = 0;
  v77 = 0;
  v78 = a5[2] - *a5;
  v79 = a5[3] - a5[1];
  if ( (*v73 & 4) != 0 )
  {
    v58 = 33488896;
    v61 = v69[9];
    v60 = v69[8];
    v59 = v69[7];
    if ( *(_WORD *)(v62 + 48) == 1 && bAllowShareAccess(v54) )
    {
      v16 = KeGetCurrentThread;
      CurrentThread = KeGetCurrentThread();
      if ( W32GetThreadWin32Thread(CurrentThread) )
      {
        v18 = KeGetCurrentThread();
        if ( *(_DWORD *)(W32GetThreadWin32Thread(v18) + 156) )
        {
          v19 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v19) + 52)
            || (v20 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v20) + 56)) )
          {
            v21 = KeGetCurrentThread();
            if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v21) + 156) + 20) & 0x10000) != 0 )
            {
              v22 = KeGetCurrentThread();
              v23 = *(int (__stdcall **)(int, int, int, int, _DWORD *, int *, int *, struct _SURFOBJ *, int, int, int))(*(_DWORD *)(W32GetThreadWin32Thread(v22) + 156) + 72);
              return v23(a1, v74, v71, v72, v75, &v76, &v58, v54, v55, v56, v57);
            }
          }
        }
      }
    }
    else
    {
      v16 = KeGetCurrentThread;
    }
    if ( *(_WORD *)(a1 + 48) == 1 )
    {
      if ( bAllowShareAccess(v54) )
      {
        v25 = v16();
        if ( W32GetThreadWin32Thread(v25) )
        {
          v26 = v16();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v26) + 156) )
          {
            v27 = v16();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v27) + 52) )
              return ((int (__stdcall *)(int, int, int, int, _DWORD *, int *, int *, struct _SURFOBJ *, int, int, int))EngAlphaBlend)(
                       a1,
                       v74,
                       v71,
                       v72,
                       v75,
                       &v76,
                       &v58,
                       v54,
                       v55,
                       v56,
                       v57);
            v28 = v16();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v28) + 56) )
              return ((int (__stdcall *)(int, int, int, int, _DWORD *, int *, int *, struct _SURFOBJ *, int, int, int))EngAlphaBlend)(
                       a1,
                       v74,
                       v71,
                       v72,
                       v75,
                       &v76,
                       &v58,
                       v54,
                       v55,
                       v56,
                       v57);
          }
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x10000) == 0 )
      return ((int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))EngAlphaBlend)(
               a1,
               v74,
               v71,
               v72,
               v75,
               &v76,
               &v58,
               v54,
               v55,
               v56,
               v57);
    else
      return (*(int (__stdcall **)(int, int, int, int, _DWORD *, int *, int *, struct _SURFOBJ *, int, int, int))(*(_DWORD *)(a1 + 12) + 856))(
               a1,
               v74,
               v71,
               v72,
               v75,
               &v76,
               &v58,
               v54,
               v55,
               v56,
               v57);
  }
  else
  {
    v29 = *(_WORD *)(v62 + 48);
    if ( (*v73 & 8) != 0 )
    {
      if ( v29 == 1 && bAllowShareAccess(v54) )
      {
        v30 = KeGetCurrentThread;
        v31 = KeGetCurrentThread();
        if ( W32GetThreadWin32Thread(v31) )
        {
          v32 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v32) + 156) )
          {
            v33 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v33) + 52)
              || (v34 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v34) + 56)) )
            {
              v35 = KeGetCurrentThread();
              if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v35) + 156) + 20) & 0x8000) != 0 )
              {
                v36 = KeGetCurrentThread();
                v37 = *(int (__stdcall **)(int, int, int, int, _DWORD *, int *, _DWORD, _DWORD, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *))(*(_DWORD *)(W32GetThreadWin32Thread(v36) + 156) + 68);
                return v37(
                         a1,
                         v74,
                         v71,
                         v72,
                         v75,
                         &v76,
                         v73[5],
                         0,
                         v54,
                         v55,
                         v56,
                         v57,
                         v58,
                         v59,
                         v60,
                         v61,
                         v62,
                         v63,
                         v64,
                         v65,
                         v66,
                         v67,
                         v68,
                         v69,
                         v70,
                         v71,
                         v72,
                         v73,
                         v74,
                         v75);
              }
            }
          }
        }
      }
      else
      {
        v30 = KeGetCurrentThread;
      }
      if ( *(_WORD *)(a1 + 48) == 1 )
      {
        if ( bAllowShareAccess(v54) )
        {
          v38 = v30();
          if ( W32GetThreadWin32Thread(v38) )
          {
            v39 = v30();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v39) + 156) )
            {
              v40 = v30();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v40) + 52) )
                return ((int (__stdcall *)(int, int, int, int, _DWORD *, int *, _DWORD, _DWORD, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *))EngTransparentBlt)(
                         a1,
                         v74,
                         v71,
                         v72,
                         v75,
                         &v76,
                         v73[5],
                         0,
                         v54,
                         v55,
                         v56,
                         v57,
                         v58,
                         v59,
                         v60,
                         v61,
                         v62,
                         v63,
                         v64,
                         v65,
                         v66,
                         v67,
                         v68,
                         v69,
                         v70,
                         v71,
                         v72,
                         v73,
                         v74,
                         v75);
              v41 = v30();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v41) + 56) )
                return ((int (__stdcall *)(int, int, int, int, _DWORD *, int *, _DWORD, _DWORD, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *))EngTransparentBlt)(
                         a1,
                         v74,
                         v71,
                         v72,
                         v75,
                         &v76,
                         v73[5],
                         0,
                         v54,
                         v55,
                         v56,
                         v57,
                         v58,
                         v59,
                         v60,
                         v61,
                         v62,
                         v63,
                         v64,
                         v65,
                         v66,
                         v67,
                         v68,
                         v69,
                         v70,
                         v71,
                         v72,
                         v73,
                         v74,
                         v75);
            }
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 56) & 0x8000) == 0 )
        return ((int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))EngTransparentBlt)(
                 a1,
                 v74,
                 v71,
                 v72,
                 v75,
                 &v76,
                 v73[5],
                 0,
                 v54,
                 v55,
                 v56,
                 v57,
                 v58,
                 v59,
                 v60,
                 v61,
                 v62,
                 v63,
                 v64,
                 v65,
                 v66,
                 v67,
                 v68,
                 v69,
                 v70,
                 v71,
                 v72,
                 v73,
                 v74,
                 v75);
      else
        return (*(int (__stdcall **)(int, int, int, int, _DWORD *, int *, _DWORD, _DWORD, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *))(*(_DWORD *)(a1 + 12) + 852))(
                 a1,
                 v74,
                 v71,
                 v72,
                 v75,
                 &v76,
                 v73[5],
                 0,
                 v54,
                 v55,
                 v56,
                 v57,
                 v58,
                 v59,
                 v60,
                 v61,
                 v62,
                 v63,
                 v64,
                 v65,
                 v66,
                 v67,
                 v68,
                 v69,
                 v70,
                 v71,
                 v72,
                 v73,
                 v74,
                 v75);
    }
    else
    {
      if ( v29 == 1 && bAllowShareAccess(v54) )
      {
        v42 = KeGetCurrentThread;
        v43 = KeGetCurrentThread();
        if ( W32GetThreadWin32Thread(v43) )
        {
          v44 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v44) + 156) )
          {
            v45 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v45) + 52)
              || (v46 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v46) + 56)) )
            {
              v47 = KeGetCurrentThread();
              if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v47) + 156) + 20) & 0x400) != 0 )
              {
                v48 = KeGetCurrentThread();
                v49 = *(int (__stdcall **)(int, int, int, int, _DWORD *, POINTL *, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *, int, int, int, int, int, int, int, int, int, DWORD, EXCEPTION_POINTERS *, struct _EH3_EXCEPTION_REGISTRATION *))(*(_DWORD *)(W32GetThreadWin32Thread(v48) + 156) + 52);
                return v49(
                         a1,
                         v74,
                         v71,
                         v72,
                         v75,
                         &gptlZero,
                         v54,
                         v55,
                         v56,
                         v57,
                         v58,
                         v59,
                         v60,
                         v61,
                         v62,
                         v63,
                         v64,
                         v65,
                         v66,
                         v67,
                         v68,
                         v69,
                         v70,
                         v71,
                         v72,
                         v73,
                         v74,
                         v75,
                         v76,
                         v77,
                         v78,
                         v79,
                         v80,
                         v81,
                         v82,
                         v83,
                         v84,
                         ms_exc.old_esp,
                         ms_exc.exc_ptr,
                         ms_exc.registration.Next);
              }
            }
          }
        }
      }
      else
      {
        v42 = KeGetCurrentThread;
      }
      if ( *(_WORD *)(a1 + 48) == 1 )
      {
        if ( bAllowShareAccess(v54) )
        {
          v50 = v42();
          if ( W32GetThreadWin32Thread(v50) )
          {
            v51 = v42();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v51) + 156) )
            {
              v52 = v42();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v52) + 52) )
                return ((int (__stdcall *)(int, int, int, int, _DWORD *, POINTL *, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *, int, int, int, int, int, int, int, int, int, DWORD, EXCEPTION_POINTERS *, struct _EH3_EXCEPTION_REGISTRATION *))EngCopyBits)(
                         a1,
                         v74,
                         v71,
                         v72,
                         v75,
                         &gptlZero,
                         v54,
                         v55,
                         v56,
                         v57,
                         v58,
                         v59,
                         v60,
                         v61,
                         v62,
                         v63,
                         v64,
                         v65,
                         v66,
                         v67,
                         v68,
                         v69,
                         v70,
                         v71,
                         v72,
                         v73,
                         v74,
                         v75,
                         v76,
                         v77,
                         v78,
                         v79,
                         v80,
                         v81,
                         v82,
                         v83,
                         v84,
                         ms_exc.old_esp,
                         ms_exc.exc_ptr,
                         ms_exc.registration.Next);
              v53 = v42();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v53) + 56) )
                return ((int (__stdcall *)(int, int, int, int, _DWORD *, POINTL *, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *, int, int, int, int, int, int, int, int, int, DWORD, EXCEPTION_POINTERS *, struct _EH3_EXCEPTION_REGISTRATION *))EngCopyBits)(
                         a1,
                         v74,
                         v71,
                         v72,
                         v75,
                         &gptlZero,
                         v54,
                         v55,
                         v56,
                         v57,
                         v58,
                         v59,
                         v60,
                         v61,
                         v62,
                         v63,
                         v64,
                         v65,
                         v66,
                         v67,
                         v68,
                         v69,
                         v70,
                         v71,
                         v72,
                         v73,
                         v74,
                         v75,
                         v76,
                         v77,
                         v78,
                         v79,
                         v80,
                         v81,
                         v82,
                         v83,
                         v84,
                         ms_exc.old_esp,
                         ms_exc.exc_ptr,
                         ms_exc.registration.Next);
            }
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
        return ((int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))EngCopyBits)(
                 a1,
                 v74,
                 v71,
                 v72,
                 v75,
                 &gptlZero,
                 v54,
                 v55,
                 v56,
                 v57,
                 v58,
                 v59,
                 v60,
                 v61,
                 v62,
                 v63,
                 v64,
                 v65,
                 v66,
                 v67,
                 v68,
                 v69,
                 v70,
                 v71,
                 v72,
                 v73,
                 v74,
                 v75,
                 v76,
                 v77,
                 v78,
                 v79,
                 v80,
                 v81,
                 v82,
                 v83,
                 v84,
                 ms_exc.old_esp,
                 ms_exc.exc_ptr,
                 ms_exc.registration.Next);
      else
        return (*(int (__stdcall **)(int, int, int, int, _DWORD *, POINTL *, struct _SURFOBJ *, int, int, int, int, int, int, int, int, int, int, int, _DWORD *, int, int, _DWORD *, int, int, int, _DWORD *, int, _DWORD *, int, int, int, int, int, int, int, int, int, DWORD, EXCEPTION_POINTERS *, struct _EH3_EXCEPTION_REGISTRATION *))(*(_DWORD *)(a1 + 12) + 836))(
                 a1,
                 v74,
                 v71,
                 v72,
                 v75,
                 &gptlZero,
                 v54,
                 v55,
                 v56,
                 v57,
                 v58,
                 v59,
                 v60,
                 v61,
                 v62,
                 v63,
                 v64,
                 v65,
                 v66,
                 v67,
                 v68,
                 v69,
                 v70,
                 v71,
                 v72,
                 v73,
                 v74,
                 v75,
                 v76,
                 v77,
                 v78,
                 v79,
                 v80,
                 v81,
                 v82,
                 v83,
                 v84,
                 ms_exc.old_esp,
                 ms_exc.exc_ptr,
                 ms_exc.registration.Next);
    }
  }
}
