/*
 * XREFs of _NtUserCreateWindowEx@68 @ 0x4221A
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@XZ @ 0x3EE60 (--0-$SmartObjStackRef@UtagMENU@@@@QAE@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@H@Z @ 0xF17DA (--0-$SmartObjStackRef@UtagMENU@@@@QAE@H@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG p_MaxCount,
        ULONG a3,
        ULONG a4,
        unsigned int a5,
        int a6,
        int **a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        unsigned __int16 a15,
        int a16,
        int a17)
{
  int v17; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v20; // eax
  int v21; // eax
  PKTHREAD v22; // eax
  int v23; // eax
  int v24; // eax
  bool v25; // zf
  unsigned int v26; // eax
  size_t *v27; // esi
  size_t *v28; // esi
  void *v29; // esi
  size_t v30; // eax
  char *v31; // eax
  void *v32; // eax
  unsigned int *v33; // esi
  int *v34; // esi
  int v35; // edx
  ULONG v36; // edx
  unsigned int *v37; // edi
  unsigned int *v38; // esi
  int *v39; // esi
  int v40; // edx
  ULONG v41; // edx
  int *Window; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // ecx
  _DWORD v47[3]; // [esp+10h] [ebp-8Ch] BYREF
  _BYTE v48[12]; // [esp+1Ch] [ebp-80h] BYREF
  int v49; // [esp+28h] [ebp-74h] BYREF
  _DWORD *v50; // [esp+2Ch] [ebp-70h]
  int v51; // [esp+30h] [ebp-6Ch]
  int v52; // [esp+34h] [ebp-68h] BYREF
  int v53; // [esp+38h] [ebp-64h]
  int v54; // [esp+3Ch] [ebp-60h]
  unsigned int v55; // [esp+40h] [ebp-5Ch] BYREF
  int v56; // [esp+44h] [ebp-58h]
  ULONG v57; // [esp+48h] [ebp-54h]
  unsigned int v58; // [esp+4Ch] [ebp-50h] BYREF
  int v59; // [esp+50h] [ebp-4Ch]
  ULONG v60; // [esp+54h] [ebp-48h]
  _DWORD v61[2]; // [esp+58h] [ebp-44h] BYREF
  int v62; // [esp+60h] [ebp-3Ch]
  size_t MaxCount; // [esp+64h] [ebp-38h] BYREF
  int v64; // [esp+68h] [ebp-34h]
  void *Src; // [esp+6Ch] [ebp-30h]
  int v66; // [esp+78h] [ebp-24h]
  int v67; // [esp+7Ch] [ebp-20h]
  int v68; // [esp+80h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+84h] [ebp-18h]
  _DWORD *v70; // [esp+C8h] [ebp+2Ch]
  unsigned int v71; // [esp+CCh] [ebp+30h]

  MaxCount = 0;
  v64 = 0;
  Src = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v17 = 0;
  v67 = 0;
  memset(v48, 0, sizeof(v48));
  v68 = 0;
  EnterCrit(0, 1);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v61);
  if ( a10 == -3 )
  {
    v70 = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v20 = *(_DWORD *)(ThreadWin32Thread + 248);
      if ( v20 )
        v70 = *(_DWORD **)(v20 + 52);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_68;
  }
  else if ( a10 )
  {
    v70 = (_DWORD *)ValidateHwnd(a10);
    if ( !v70 )
      goto LABEL_56;
  }
  else
  {
    v70 = 0;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    v66 = _gptiCurrent;
    if ( !a11 || (a5 & 0xC0000000) == 0x40000000 )
    {
      v21 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(a11);
      v62 = *(_DWORD *)(v21 + 8);
      SmartObjStackRefBase<tagMENU>::operator=(**(_DWORD **)v21);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v47);
    }
    else
    {
      v44 = ValidateHmenu(a11);
      v62 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(v44);
      if ( SmartObjStackRef<tagMENU>::operator==(v61, v45) )
        goto LABEL_56;
      v46 = v62;
      if ( !v62 )
        v46 = *(_DWORD *)v61[0];
      v52 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v52;
      v53 = v46;
      HMLockObject(v46);
      v67 = 1;
    }
    v22 = KeGetCurrentThread();
    v23 = W32GetThreadWin32Thread(v22);
    if ( *(_DWORD *)(v23 + 340) <= 0x400u )
      v24 = *(_DWORD *)(v23 + 352);
    else
      LOWORD(v24) = 0;
    v25 = (v24 & 0x800) == 0;
    v26 = a1;
    if ( !v25 )
      v26 = a1 & 0x800777FF;
    v71 = v26;
    if ( (v26 & 0x8A7F77FF) != v26 )
      v71 = v26 & 0x8A7F77FF;
    ms_exc.registration.TryLevel = 0;
    if ( (p_MaxCount & 0xFFFF0000) != 0 )
    {
      v27 = (size_t *)_MmUserProbeAddress;
      if ( p_MaxCount < _MmUserProbeAddress )
        v27 = (size_t *)p_MaxCount;
      MaxCount = *v27;
      v28 = v27 + 1;
      v64 = *v28;
      Src = (void *)v28[1];
      v29 = Src;
      if ( Src )
      {
        if ( MaxCount > (v64 & 0x7FFFFFFFu) )
          goto LABEL_69;
        v30 = v64 < 0 ? MaxCount + 1 : MaxCount + 2;
        v31 = (char *)Src + v30;
        if ( v31 < Src || (unsigned int)v31 > _MmUserProbeAddress )
          goto LABEL_69;
        v32 = (void *)Win32AllocPoolWithQuota(MaxCount + 2, 2020897621);
        Src = v32;
        if ( !v32 )
          ExRaiseStatus(-1073741801);
        v68 = 1;
        PushW32ThreadLock(v32, v48, Win32FreePool);
        memcpy(Src, v29, MaxCount);
        *((_WORD *)Src + (MaxCount >> 1)) = 0;
        v64 ^= (v64 ^ (MaxCount + 2)) & 0x7FFFFFFF;
      }
      else
      {
        MaxCount = 0;
      }
      p_MaxCount = (ULONG)&MaxCount;
    }
    if ( (a3 & 0xFFFF0000) != 0 )
    {
      v33 = (unsigned int *)_MmUserProbeAddress;
      if ( a3 < _MmUserProbeAddress )
        v33 = (unsigned int *)a3;
      v58 = *v33;
      v34 = (int *)(v33 + 1);
      v59 = *v34;
      v60 = v34[1];
      if ( v60 )
      {
        if ( v58 > (v59 & 0x7FFFFFFFu) )
          goto LABEL_69;
        v35 = v59 < 0 ? v58 + 1 : v58 + 2;
        v36 = v60 + v35;
        if ( v36 < v60 || v36 > _MmUserProbeAddress )
          goto LABEL_69;
      }
      else
      {
        v58 = 0;
      }
      a3 = (ULONG)&v58;
    }
    v37 = (unsigned int *)a4;
    if ( !a4 )
    {
LABEL_47:
      ms_exc.registration.TryLevel = -2;
      v49 = *(_DWORD *)(v66 + 228);
      *(_DWORD *)(v66 + 228) = &v49;
      v50 = v70;
      if ( v70 )
        HMLockObject(v70);
      Window = (int *)xxxCreateWindowEx(
                        v71,
                        (_DWORD *)p_MaxCount,
                        a3,
                        v37,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        v70,
                        (int)v61,
                        a12,
                        a13,
                        a14,
                        a15,
                        a16,
                        a17);
      if ( Window )
        v17 = *Window;
      ThreadUnlock1();
      goto LABEL_52;
    }
    v38 = (unsigned int *)_MmUserProbeAddress;
    if ( a4 < _MmUserProbeAddress )
      v38 = (unsigned int *)a4;
    v55 = *v38;
    v39 = (int *)(v38 + 1);
    v56 = *v39;
    v57 = v39[1];
    if ( !v57 )
    {
      v55 = 0;
LABEL_46:
      v37 = &v55;
      goto LABEL_47;
    }
    if ( v55 <= (v56 & 0x7FFFFFFFu) )
    {
      v40 = v56 < 0 ? v55 + 1 : v55 + 2;
      v41 = v57 + v40;
      if ( v41 >= v57 && v41 <= _MmUserProbeAddress )
        goto LABEL_46;
    }
LABEL_69:
    ExRaiseAccessViolation();
  }
LABEL_68:
  UserSetLastError(87);
LABEL_52:
  if ( v68 )
    PopAndFreeAlwaysW32ThreadLock(v48);
  if ( v67 )
    ThreadUnlock1();
LABEL_56:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v61);
  UserSessionSwitchLeaveCrit();
  return v17;
}
