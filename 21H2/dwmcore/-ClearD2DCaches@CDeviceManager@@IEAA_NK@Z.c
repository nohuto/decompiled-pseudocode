/*
 * XREFs of ?ClearD2DCaches@CDeviceManager@@IEAA_NK@Z @ 0x18007D9DC
 * Callers:
 *     ?ClearCaches@CComposition@@IEBA_NXZ @ 0x18007D960 (-ClearCaches@CComposition@@IEBA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearProtectedResources@CD3DDevice@@QEAA_NXZ @ 0x18027CFA0 (-ClearProtectedResources@CD3DDevice@@QEAA_NXZ.c)
 */

char __fastcall CDeviceManager::ClearD2DCaches(CDeviceManager *this, int a2)
{
  char v2; // bp
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // r8d
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 i; // rdi
  char v9; // si
  __int64 v10; // rbx
  __int64 *j; // rcx
  __int64 v12; // rdx
  CD3DDevice *v13; // rcx
  int v15; // [rsp+64h] [rbp+Ch]
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = a2;
  v2 = 1;
  v3 = *((_QWORD *)g_pComposition + 27);
  v4 = *(_QWORD *)(v3 + 544);
  v5 = *(_DWORD *)(v3 + 552);
  v15 = HIDWORD(v4);
  if ( !(_DWORD)v4 || !*(_DWORD *)(v3 + 548) )
  {
    v15 = 1080;
    v5 = 4;
    LODWORD(v4) = 1920;
  }
  v6 = v5 * ((v4 + 255) & 0xFFFFFF00) * ((v15 + 255) & 0xFFFFFF00)
     + ((v5 * (((_DWORD)v4 + 255) & 0xFFFFFF00) * ((v15 + 255) & 0xFFFFFF00)) >> 2);
  EnterCriticalSection(&stru_1803D75A8);
  v7 = *((_QWORD *)&xmmword_1803D75D0 + 1);
  for ( i = xmmword_1803D75D0; i != v7; i += 16LL )
  {
    v9 = 0;
    v10 = *(_QWORD *)(*(_QWORD *)i + 896LL);
    EnterCriticalSection(&stru_1803D75A8);
    for ( j = (__int64 *)xmmword_1803D75D0; j != *((__int64 **)&xmmword_1803D75D0 + 1); j += 2 )
    {
      v12 = *j;
      if ( v10 == *(_QWORD *)(*j + 896) )
      {
        if ( !*(_BYTE *)(v12 + 452) && !byte_1803D75E8 && *(_DWORD *)(v12 + 448) )
          v9 = 1;
        break;
      }
    }
    LeaveCriticalSection(&stru_1803D75A8);
    if ( *(_BYTE *)(i + 8) && !v9 )
      CD3DDevice::ClearProtectedResources(*(CD3DDevice **)i);
    v13 = *(CD3DDevice **)i;
    v16 = 1;
    if ( *((_QWORD *)v13 + 25) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, int *))(**((_QWORD **)v13 + 26) + 40LL))(
        *((_QWORD *)v13 + 26),
        2000LL,
        v6,
        &v16);
      if ( v16 != 1 )
        v2 = 0;
    }
    *(_BYTE *)(i + 8) = v9;
  }
  LeaveCriticalSection(&stru_1803D75A8);
  return v2;
}
