/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x1407426D8
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x1407424CC (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14037BE44 (PnpDiagnosticTraceDeviceOperation.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PnpIsLegacyDriver @ 0x1407404AC (PnpIsLegacyDriver.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x1407429F8 (IopReferenceDriverObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     PipOpenServiceEnumKeys @ 0x140742DAC (PipOpenServiceEnumKeys.c)
 *     PnpGetServiceStartType @ 0x140742F34 (PnpGetServiceStartType.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     IopCallDriverReinitializationRoutines @ 0x140771C94 (IopCallDriverReinitializationRoutines.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407BD894 (PnpCheckPossibleBootStartDriver.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     PnpLoadBootFilterDriver @ 0x140A5C5A0 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5FC00 (PpInitGetGroupOrderIndex.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(
        int a1,
        const WCHAR *a2,
        unsigned int a3,
        __int64 *a4,
        int a5,
        char a6)
{
  __int64 result; // rax
  const WCHAR *v7; // rbx
  struct _DMA_ADAPTER *v9; // rsi
  int v10; // r13d
  char v11; // r12
  HANDLE v12; // r15
  __int16 v13; // dx
  char v14; // r14
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int DriverNameFromKeyNode; // eax
  int ServiceStartType; // eax
  unsigned int v20; // r14d
  __int64 v21; // rax
  int v22; // eax
  SIZE_T v23; // rdx
  _QWORD *v24; // rdi
  _QWORD *PoolWithTag; // rax
  int v26; // eax
  void *v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r8d
  int v34; // edx
  int v35; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-2Ch] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  char v40; // [rsp+90h] [rbp+30h]

  result = 0LL;
  v7 = L"\\Driver\\";
  v36 = 0;
  v35 = 0;
  v40 = 0;
  Handle = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( a1 == 1 && a3 > 2 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v13 = 92;
    v14 = 1;
    v15 = 0;
    do
    {
      if ( DestinationString.Buffer[v15] != v13 )
      {
        v16 = 0;
        v14 = 0;
        goto LABEL_6;
      }
      ++v7;
      ++v15;
      v13 = *v7;
    }
    while ( *v7 );
    v16 = 0;
LABEL_6:
    if ( v14 )
    {
      RtlInitUnicodeString(&UnicodeString, DestinationString.Buffer);
    }
    else
    {
      if ( !*(_WORD *)(*a4 + 56) )
      {
        *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
        *(_QWORD *)(*a4 + 64) = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x48706E50u);
        v27 = *(void **)(*a4 + 64);
        if ( !v27 )
        {
          *(_WORD *)(*a4 + 58) = 0;
          *(_WORD *)(*a4 + 56) = 0;
          *(_QWORD *)(*a4 + 64) = 0LL;
          return (unsigned int)-1073741823;
        }
        memmove(v27, DestinationString.Buffer, DestinationString.MaximumLength);
      }
      v17 = PipOpenServiceEnumKeys(&DestinationString, 131097LL, &Handle, 0LL, 0);
      v16 = v17;
      if ( v17 < 0 )
      {
        if ( v17 != -1073741772 || a5 )
          PipSetDevNodeProblem(*a4, 19, v17);
        else
          v16 = 0;
        v12 = Handle;
        goto LABEL_23;
      }
      v12 = Handle;
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &UnicodeString);
      v16 = DriverNameFromKeyNode;
      if ( DriverNameFromKeyNode < 0 )
      {
        PipSetDevNodeProblem(*a4, 19, DriverNameFromKeyNode);
        goto LABEL_23;
      }
      v40 = 1;
      v16 = 0;
    }
    v9 = (struct _DMA_ADAPTER *)IopReferenceDriverObjectByName(&UnicodeString);
    Handle = v9;
    if ( v9 )
    {
LABEL_36:
      if ( (*(_DWORD *)&v9[1].Version & 0x10) != 0 )
      {
        if ( PnpIsLegacyDriver((__int64)v9) )
        {
          if ( a5 != 3 )
            goto LABEL_22;
          PipSetDevNodeFlags(*a4, 4096LL);
          PipSetDevNodeState(*a4, 776);
        }
        else if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 770) <= 1 )
        {
          v24 = (__int64 *)((char *)&a4[a5] + v23);
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(v23 - 15), v23, 0x6E657050u);
          if ( PoolWithTag )
          {
            *PoolWithTag = v9;
            v9 = 0LL;
            PoolWithTag[1] = 0LL;
            while ( *v24 )
              v24 = (_QWORD *)(*v24 + 8LL);
            *v24 = PoolWithTag;
          }
          else
          {
            v16 = -1073741670;
          }
          goto LABEL_22;
        }
      }
      goto LABEL_21;
    }
    if ( !v14 )
    {
      ServiceStartType = PnpGetServiceStartType(DestinationString.Buffer, v12, &v36);
      v20 = v36;
      if ( ServiceStartType < 0 )
        v20 = 4;
      if ( a5 != 3 && !PnPBootDriversInitialized )
      {
        PpInitGetGroupOrderIndex(v12);
        v26 = PnpLoadBootFilterDriver(v12, &UnicodeString);
        v16 = v26;
        if ( v26 < 0 )
        {
          if ( (unsigned int)(v26 + 1073740949) > 1 )
          {
            if ( v20 && !*(_BYTE *)(a4[1] + 4) && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v12) )
              *(_BYTE *)(*a4 + 688) = 1;
            v9 = (struct _DMA_ADAPTER *)Handle;
            goto LABEL_22;
          }
          v9 = (struct _DMA_ADAPTER *)Handle;
        }
        else
        {
          v9 = (struct _DMA_ADAPTER *)Handle;
          if ( !Handle )
            goto LABEL_87;
          ObfReferenceObject(Handle);
        }
        goto LABEL_50;
      }
      v21 = a4[1];
      if ( v20 > *(_DWORD *)v21 )
      {
        if ( v20 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
          PipSetDevNodeProblem(*a4, 32, 0);
      }
      else
      {
        if ( *(_BYTE *)(v21 + 4) )
        {
          v22 = IopLoadDriver(v12, a6, a5 != 3, &v35);
          v16 = v22;
          v12 = 0LL;
          v10 = v22;
          if ( v22 < 0 )
          {
            if ( v22 == -1073740955 )
            {
              if ( v35 == -1073741670 )
                v16 = -1073741670;
            }
            else
            {
              v28 = (unsigned int)(v22 + 1073740961);
              if ( (unsigned int)v28 > 0x2F || (v29 = 0x800000003001LL, !_bittest64(&v29, v28)) )
              {
                if ( v16 != -1073741218 && v16 != -1073741670 && v16 != -1073740760 )
                  v16 = -1073741204;
              }
            }
          }
          if ( PnPInitialized )
            IopCallDriverReinitializationRoutines(0LL);
          v9 = (struct _DMA_ADAPTER *)IopReferenceDriverObjectByName(&UnicodeString);
          if ( v9 )
          {
LABEL_35:
            v16 = 0;
            goto LABEL_36;
          }
          if ( !PnpBootMode
            || (unsigned int)(v16 + 1073740961) <= 0xD && (v30 = 12353, _bittest(&v30, v16 + 1073740961))
            || v16 == -1073740760 )
          {
LABEL_87:
            PnpDiagnosticTraceDeviceOperation(
              &KMPnPEvt_DriverLoad_Fail,
              (unsigned __int16 *)(*a4 + 40),
              v16,
              (__int64)&UnicodeString,
              0);
            v31 = *a4;
            if ( (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
            {
              if ( v16 > -1073740955 )
              {
                if ( v16 == -1073740949 )
                {
                  PipSetDevNodeProblem(v31, 48, -1073740949);
                  PipSetDevNodeFlags(*a4, 0x100000LL);
                  goto LABEL_22;
                }
                if ( v16 == -1073740948 )
                {
                  PipSetDevNodeFlags(v31, 0x100000LL);
                  v16 = 0;
                  goto LABEL_22;
                }
                v33 = -1073740914;
                if ( v16 == -1073740914 )
                {
                  v34 = 38;
                  goto LABEL_100;
                }
                v32 = -1073740760;
                if ( v16 != -1073740760 )
                  goto LABEL_108;
                v34 = 52;
              }
              else
              {
                if ( v16 == -1073740955 )
                {
                  v33 = v35;
                  v34 = 37;
                  goto LABEL_100;
                }
                v32 = -1073741670;
                if ( v16 == -1073741670 )
                {
                  v34 = 3;
                }
                else
                {
                  v33 = -1073741472;
                  if ( v16 == -1073741472 )
                  {
                    v34 = 40;
                    goto LABEL_100;
                  }
                  if ( v16 == -1073741411 )
                    goto LABEL_95;
                  v32 = -1073741218;
                  if ( v16 != -1073741218 )
                  {
                    if ( v16 == -1073741204 )
                    {
LABEL_95:
                      v33 = v10;
                      v34 = 39;
LABEL_100:
                      PipSetDevNodeProblem(v31, v34, v33);
                      goto LABEL_22;
                    }
LABEL_108:
                    v33 = v16;
                    v34 = 31;
                    goto LABEL_100;
                  }
                  v34 = 41;
                }
              }
              v33 = v32;
              goto LABEL_100;
            }
LABEL_22:
            v11 = v40;
LABEL_23:
            if ( v12 )
              ZwClose(v12);
            if ( v11 )
              RtlFreeAnsiString(&UnicodeString);
            if ( v9 )
              HalPutDmaAdapter(v9);
            return (unsigned int)v16;
          }
          v16 = -1073741204;
LABEL_50:
          if ( !v9 )
            goto LABEL_87;
          goto LABEL_35;
        }
        if ( v20 && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v12) )
          *(_BYTE *)(*a4 + 688) = 1;
      }
    }
LABEL_21:
    v16 = -1073741823;
    goto LABEL_22;
  }
  return result;
}
