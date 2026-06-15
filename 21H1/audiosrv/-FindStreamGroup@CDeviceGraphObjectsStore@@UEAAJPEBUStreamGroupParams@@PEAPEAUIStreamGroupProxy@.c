/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180029000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180074B43 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CE008 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  const struct StreamGroupParams *v6; // r15
  _QWORD *i; // rdi
  unsigned int v8; // ebx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int16 *v16; // r15
  __int64 v17; // r14
  const void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // al
  unsigned __int8 (__fastcall ***v22)(_QWORD); // rax
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-30h] BYREF
  struct IStreamGroupProxy *v25; // [rsp+28h] [rbp-28h] BYREF
  const struct StreamGroupParams *v26; // [rsp+30h] [rbp-20h]
  _BYTE v27[16]; // [rsp+38h] [rbp-18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v26 = a2;
  *a3 = 0LL;
  v6 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = (_QWORD *)*((_QWORD *)this + 8); i != *((_QWORD **)this + 9); ++i )
  {
    v10 = *i;
    if ( *i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*i);
    v11 = 0LL;
    v24 = 0LL;
    if ( !v10
      || (v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL))(
                  v10,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  &v24),
          v11 = v24,
          v12 < 0) )
    {
      if ( v11 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
LABEL_13:
      if ( !v10 )
        continue;
      goto LABEL_14;
    }
    if ( !v24 )
      goto LABEL_13;
    v25 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v24, &v25) < 0
      || *((_QWORD *)v6 + 3) != (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v25 + 104LL))(v25) )
    {
      goto LABEL_27;
    }
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *, _BYTE *))(*(_QWORD *)v25 + 112LL))(v25, v27);
    v14 = *((_QWORD *)v6 + 4) - *v13;
    if ( !v14 )
      v14 = *((_QWORD *)v6 + 5) - v13[1];
    if ( v14 )
      goto LABEL_27;
    if ( *((_DWORD *)v6 + 2) != (*(unsigned int (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v25 + 160LL))(v25) )
      goto LABEL_27;
    v15 = *((_QWORD *)v6 + 2);
    if ( *(_WORD *)(v15 + 16) != *(_WORD *)((*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v25
                                                                                                  + 120LL))(v25)
                                          + 16) )
      goto LABEL_27;
    v16 = (unsigned __int16 *)*((_QWORD *)v6 + 2);
    v17 = v16[8];
    v18 = (const void *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v25 + 120LL))(v25);
    if ( !memcmp_0(v16, v18, v17 + 18) )
    {
      v21 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v25 + 136LL))(v25);
      v6 = v26;
      if ( *((_BYTE *)v26 + 49) == v21
        && *((_BYTE *)v6 + 48) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v25 + 152LL))(v25)
        && *((_BYTE *)v6 + 50) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v25 + 232LL))(v25) )
      {
        v22 = (unsigned __int8 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v25 + 256LL))(v25);
        if ( *((_QWORD *)v6 + 7) )
        {
          if ( v22 && (**v22)(v22) )
          {
LABEL_34:
            *a3 = v25;
            v25 = 0LL;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
            v23 = v24;
            if ( v24 )
            {
              v24 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            break;
          }
        }
        else if ( !v22 )
        {
          goto LABEL_34;
        }
      }
LABEL_27:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
      v20 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
LABEL_14:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      continue;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v6 = v26;
  }
  v8 = -2147023728;
  if ( *a3 )
    v8 = 0;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
