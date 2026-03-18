/*
 * XREFs of ACPIDeviceDiscoverDependencies @ 0x1C0025F00
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x1C0025DD0 (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001A120 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 */

_UNKNOWN **__fastcall ACPIDeviceDiscoverDependencies(_QWORD *a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF

  result = &retaddr;
  v3 = a1[5];
  v19 = 0;
  v18 = 0;
  if ( *(_QWORD *)(v3 + 784) )
  {
    v6 = (_QWORD *)*a2;
    while ( v6 != a2 )
    {
      v7 = v6[5];
      v8 = v6;
      v6 = (_QWORD *)*v6;
      if ( a1 == v8 )
        continue;
      if ( (v8[7] & 0x4000000) != 0 )
        continue;
      v9 = *(_QWORD *)(v7 + 784);
      if ( !v9 )
        continue;
      if ( (*(_BYTE *)(v3 + 1000) & 0x40) != 0 )
      {
        result = (_UNKNOWN **)IoTestDependency(*(_QWORD *)(v3 + 784), v9, &v19, &v18);
        if ( (int)result < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = (_DWORD)result;
            result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    2u,
                                    0x15u,
                                    0x14u,
                                    (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
                                    v16);
          }
        }
        else if ( (v18 & 1) != 0 )
        {
          result = (_UNKNOWN **)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( !result )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                      2u,
                                      0x15u,
                                      0x13u,
                                      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids);
            continue;
          }
          v10 = (_QWORD *)a1[9];
          v11 = result + 2;
          if ( (_QWORD *)*v10 != a1 + 8 )
            goto LABEL_27;
          *v11 = a1 + 8;
          result[3] = v10;
          *v10 = v11;
          a1[9] = v11;
          v12 = v8 + 10;
LABEL_17:
          v13 = (_QWORD *)v12[1];
          if ( (_QWORD *)*v13 != v12 )
            goto LABEL_27;
          *result = v12;
          result[1] = v13;
          *v13 = result;
          v12[1] = result;
          continue;
        }
      }
      if ( (*(_BYTE *)(v7 + 1000) & 0x40) != 0 )
      {
        result = (_UNKNOWN **)IoTestDependency(*(_QWORD *)(v7 + 784), *(_QWORD *)(v3 + 784), &v19, &v18);
        if ( (int)result < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = (_DWORD)result;
            result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    2u,
                                    0x15u,
                                    0x16u,
                                    (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
                                    v16);
          }
          continue;
        }
        if ( (v18 & 1) != 0 )
        {
          result = (_UNKNOWN **)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( !result )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                      2u,
                                      0x15u,
                                      0x15u,
                                      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids);
            continue;
          }
          v14 = (_QWORD *)v8[9];
          v15 = result + 2;
          if ( (_QWORD *)*v14 != v8 + 8 )
LABEL_27:
            __fastfail(3u);
          *v15 = v8 + 8;
          result[3] = v14;
          *v14 = v15;
          v8[9] = v15;
          v12 = a1 + 10;
          goto LABEL_17;
        }
      }
    }
  }
  return result;
}
