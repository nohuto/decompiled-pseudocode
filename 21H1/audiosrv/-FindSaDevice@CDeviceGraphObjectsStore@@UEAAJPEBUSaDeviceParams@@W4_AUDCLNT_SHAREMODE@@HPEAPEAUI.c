/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180033080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BBF6C (WPP_SF_d.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CDF9C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E7C20 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x1800E9A50 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        struct ISaDeviceProxy **a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r13
  struct ISaDeviceProxy ****v6; // r14
  struct ISaDeviceProxy **v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // r12d
  struct ISaDeviceProxy ****v10; // r15
  struct ISaDeviceProxy ***i; // rbx
  unsigned int v12; // r12d
  int v13; // ebx
  bool v14; // bl
  bool v15; // zf
  int v16; // ebx
  enum _AUDCLNT_SHAREMODE v17; // eax
  struct ISaDeviceProxy **v18; // r15
  __int64 v19; // rdx
  unsigned int v20; // esi
  struct ISaDeviceProxy ***v21; // rbx
  struct ISaDeviceProxy **v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct ISaDeviceProxy **v27; // rdi
  CDeviceGraphObjectsStore *v28; // rcx
  CDeviceGraphObjectsStore *v29; // rcx
  struct ISaDeviceProxy **v30; // rax
  CDeviceGraphObjectsStore *v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-51h] BYREF
  struct ISaDeviceProxy **v33; // [rsp+28h] [rbp-49h] BYREF
  struct ISaDeviceProxy **v34; // [rsp+30h] [rbp-41h] BYREF
  struct ISaDeviceProxy **v35; // [rsp+38h] [rbp-39h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+40h] [rbp-31h] BYREF
  const struct SaDeviceParams *v37; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall ***v38)(); // [rsp+78h] [rbp+7h]
  CDeviceGraphObjectsStore *v39; // [rsp+D0h] [rbp+5Fh] BYREF
  const struct SaDeviceParams *v40; // [rsp+D8h] [rbp+67h]
  enum _AUDCLNT_SHAREMODE v41; // [rsp+E0h] [rbp+6Fh]
  int v42; // [rsp+E8h] [rbp+77h]

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v39 = this;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v6 = (struct ISaDeviceProxy ****)((char *)this + 88);
  *a5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  LODWORD(v37) = 1;
  v36 = off_180155C00;
  v7 = 0LL;
  v38 = &v36;
  EnterCriticalSection(v5);
  v9 = 0;
  v10 = v6;
  while ( 2 )
  {
    if ( v7 )
      goto LABEL_61;
    for ( i = *v10; i != v10[1]; ++i )
    {
      v23 = *i;
      v34 = v23;
      if ( v23 )
        (*((void (__fastcall **)(struct ISaDeviceProxy **))*v23 + 1))(v23);
      v32 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v34, &v32) < 0 )
      {
        v25 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
LABEL_53:
        if ( !v23 )
          continue;
LABEL_54:
        (*((void (__fastcall **)(struct ISaDeviceProxy **))*v23 + 2))(v23);
        continue;
      }
      if ( !v32 )
        goto LABEL_53;
      v33 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v32, &v33) < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
        v24 = v32;
        if ( !v32 )
          goto LABEL_45;
LABEL_44:
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        goto LABEL_45;
      }
      v35 = v33;
      if ( !v38 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        goto LABEL_61;
      }
      if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), struct ISaDeviceProxy ***))(*v38)[2])(v38, &v35) )
      {
        v7 = v33;
        v33 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
        v26 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( v23 )
          (*((void (__fastcall **)(struct ISaDeviceProxy **))*v23 + 2))(v23);
        break;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
      v24 = v32;
      if ( v32 )
        goto LABEL_44;
LABEL_45:
      if ( v23 )
        goto LABEL_54;
    }
    ++v9;
    v10 += 3;
    if ( v9 < 4 )
      continue;
    break;
  }
  if ( !v7 )
  {
    v12 = -2005139430;
    v13 = -2005139430;
    goto LABEL_8;
  }
LABEL_61:
  v13 = 0;
  v12 = -2005139430;
LABEL_8:
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( v38 )
  {
    if ( v38 == &v36 )
      v8 = 0LL;
    else
      LOBYTE(v8) = 1;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v38)[4])(v38, v8);
    v38 = 0LL;
  }
  v14 = v13 >= 0;
  if ( v7 )
    (*((void (__fastcall **)(struct ISaDeviceProxy **))*v7 + 2))(v7);
  v15 = !v14;
  v16 = v42;
  if ( v15 )
  {
    v17 = v41;
  }
  else if ( !v42 || (v17 = v41) != AUDCLNT_SHAREMODE_SHARED )
  {
    v12 = -2005139364;
    goto LABEL_32;
  }
  if ( v17 != AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( *((_DWORD *)v40 + 2) == 1 )
      goto LABEL_32;
    v18 = a5;
    v36 = off_180155BD0;
    v37 = v40;
    v38 = &v36;
    *a5 = 0LL;
    EnterCriticalSection(v5);
    v20 = 0;
    while ( 2 )
    {
      if ( *v18 )
        goto LABEL_92;
      v21 = *v6;
LABEL_23:
      if ( v21 == v6[1] )
      {
LABEL_24:
        ++v20;
        v6 += 3;
        if ( v20 < 4 )
          continue;
        if ( !*v18 )
        {
LABEL_26:
          if ( v5 )
            LeaveCriticalSection(v5);
          if ( v38 )
          {
            if ( v38 == &v36 )
              v19 = 0LL;
            else
              LOBYTE(v19) = 1;
            ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v38)[4])(v38, v19);
          }
          goto LABEL_32;
        }
LABEL_92:
        v12 = 0;
        goto LABEL_26;
      }
      break;
    }
    v27 = *v21;
    v35 = v27;
    if ( v27 )
      (*((void (__fastcall **)(struct ISaDeviceProxy **))*v27 + 1))(v27);
    v39 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v35, &v39) < 0 )
    {
      v29 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    else if ( v39 )
    {
      a5 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v39, &a5) >= 0 )
      {
        v34 = a5;
        if ( !v38 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          goto LABEL_92;
        }
        if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), struct ISaDeviceProxy ***))(*v38)[2])(
               v38,
               &v34) )
        {
          v30 = a5;
          a5 = 0LL;
          *v18 = (struct ISaDeviceProxy *)v30;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&a5);
          v31 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v31 + 16LL))(v31);
          }
          if ( v27 )
            (*((void (__fastcall **)(struct ISaDeviceProxy **))*v27 + 2))(v27);
          goto LABEL_24;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&a5);
        v28 = v39;
        if ( v39 )
        {
LABEL_75:
          v39 = 0LL;
          (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&a5);
        v28 = v39;
        if ( v39 )
          goto LABEL_75;
      }
      if ( !v27 )
      {
LABEL_86:
        ++v21;
        goto LABEL_23;
      }
LABEL_85:
      (*((void (__fastcall **)(struct ISaDeviceProxy **))*v27 + 2))(v27);
      goto LABEL_86;
    }
    if ( !v27 )
      goto LABEL_86;
    goto LABEL_85;
  }
  if ( CDeviceGraphObjectsStore::SaDeviceExists(v39, AUDCLNT_SHAREMODE_SHARED) && !v16 )
    v12 = -2005139363;
LABEL_32:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_95ddedc4add13e06ef360afb0b04205c_Traceguids, v12);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v12;
}
