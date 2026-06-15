/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180018160
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180017F20 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800BA86C (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800BAAF4 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001BBA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18002C8BC (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x18006B61E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     memmove_0 @ 0x180074C5B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall COnDeviceWorkItem::COnDeviceWorkItem(__int64 a1, _WORD *a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  char *v10; // rcx
  size_t v11; // r8
  __int64 v12; // rax
  char *v14; // rdx

  *(_QWORD *)a1 = &COnDeviceWorkItem::`vftable';
  *(_QWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( !a2 )
    goto LABEL_21;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  if ( !(_DWORD)v6 )
  {
LABEL_21:
    ATL::CSimpleStringT<unsigned short,0>::Empty(a1 + 8);
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(unsigned int *)(v7 - 16);
  v9 = ((__int64)a2 - v7) >> 1;
  if ( ((1 - *(_DWORD *)(v7 - 8)) | (*(_DWORD *)(v7 - 12) - (int)v6)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1 + 8, (unsigned int)v6);
  v10 = *(char **)(a1 + 8);
  v11 = 2LL * (int)v6;
  if ( v9 <= v8 )
  {
    v14 = &v10[2 * v9];
    if ( !v11 )
      goto LABEL_11;
    if ( v10 && v14 )
    {
      memmove_0(v10, v14, v11);
      goto LABEL_11;
    }
  }
  else
  {
    if ( !v11 )
      goto LABEL_11;
    if ( v10 )
    {
      memcpy_0(v10, a2, v11);
      goto LABEL_11;
    }
  }
  *(_DWORD *)_o__errno(v10) = 22;
  invalid_parameter_noinfo();
LABEL_11:
  if ( (int)v6 < 0 || (v12 = *(_QWORD *)(a1 + 8), (int)v6 > *(_DWORD *)(v12 - 12)) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(v12 - 16) = v6;
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * (int)v6) = 0;
LABEL_14:
  *(_DWORD *)(a1 + 16) = a3;
  return a1;
}
