/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x1407282D4
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x1407280C8 (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14037A45C (PnpDiagnosticTraceDeviceOperation.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 *     IopReferenceDriverObjectByName @ 0x1407285F4 (IopReferenceDriverObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x1407286BC (IopGetDriverNameFromKeyNode.c)
 *     PipOpenServiceEnumKeys @ 0x1407289A8 (PipOpenServiceEnumKeys.c)
 *     PnpGetServiceStartType @ 0x140728B30 (PnpGetServiceStartType.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     PnpIsLegacyDriver @ 0x14072A018 (PnpIsLegacyDriver.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 *     IopCallDriverReinitializationRoutines @ 0x14075F1A8 (IopCallDriverReinitializationRoutines.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407AA564 (PnpCheckPossibleBootStartDriver.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     PnpLoadBootFilterDriver @ 0x140A4BA98 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A4F0F8 (PpInitGetGroupOrderIndex.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 result; // rax
  const WCHAR *v6; // rbx
  struct _DMA_ADAPTER *v8; // rsi
  unsigned int v9; // r13d
  char v10; // r12
  HANDLE v11; // r15
  __int16 v12; // dx
  char v13; // r14
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  int DriverNameFromKeyNode; // eax
  int ServiceStartType; // eax
  unsigned int v19; // r14d
  __int64 v20; // rax
  int Driver; // eax
  SIZE_T v22; // rdx
  _QWORD *v23; // rdi
  _QWORD *PoolWithTag; // rax
  int v25; // eax
  void *v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned int v34; // [rsp+34h] [rbp-2Ch] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  char v38; // [rsp+90h] [rbp+30h]

  result = 0LL;
  v6 = L"\\Driver\\";
  v34 = 0;
  v38 = 0;
  Handle = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( a1 == 1 && a3 > 2 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v12 = 92;
    v13 = 1;
    v14 = 0;
    do
    {
      if ( DestinationString.Buffer[v14] != v12 )
      {
        v15 = 0;
        v13 = 0;
        goto LABEL_6;
      }
      ++v6;
      ++v14;
      v12 = *v6;
    }
    while ( *v6 );
    v15 = 0;
LABEL_6:
    if ( v13 )
    {
      RtlInitUnicodeString(&UnicodeString, DestinationString.Buffer);
    }
    else
    {
      if ( !*(_WORD *)(*a4 + 56) )
      {
        *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
        *(_QWORD *)(*a4 + 64) = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x48706E50u);
        v26 = *(void **)(*a4 + 64);
        if ( !v26 )
        {
          *(_WORD *)(*a4 + 58) = 0;
          *(_WORD *)(*a4 + 56) = 0;
          *(_QWORD *)(*a4 + 64) = 0LL;
          return (unsigned int)-1073741823;
        }
        memmove(v26, DestinationString.Buffer, DestinationString.MaximumLength);
      }
      v16 = PipOpenServiceEnumKeys(&DestinationString, 131097LL, &Handle, 0LL, 0);
      v15 = v16;
      if ( v16 < 0 )
      {
        if ( v16 != -1073741772 || a5 )
          PipSetDevNodeProblem(*a4, 19LL, (unsigned int)v16);
        else
          v15 = 0;
        v11 = Handle;
        goto LABEL_23;
      }
      v11 = Handle;
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &UnicodeString);
      v15 = DriverNameFromKeyNode;
      if ( DriverNameFromKeyNode < 0 )
      {
        PipSetDevNodeProblem(*a4, 19LL, (unsigned int)DriverNameFromKeyNode);
        goto LABEL_23;
      }
      v38 = 1;
      v15 = 0;
    }
    v8 = (struct _DMA_ADAPTER *)IopReferenceDriverObjectByName(&UnicodeString);
    Handle = v8;
    if ( v8 )
    {
LABEL_36:
      if ( (*(_DWORD *)&v8[1].Version & 0x10) != 0 )
      {
        if ( (unsigned int)PnpIsLegacyDriver(v8) )
        {
          if ( a5 != 3 )
            goto LABEL_22;
          PipSetDevNodeFlags(*a4, 4096);
          PipSetDevNodeState(*a4, 776);
        }
        else if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 770) <= 1 )
        {
          v23 = (__int64 *)((char *)&a4[a5] + v22);
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(v22 - 15), v22, 0x6E657050u);
          if ( PoolWithTag )
          {
            *PoolWithTag = v8;
            v8 = 0LL;
            PoolWithTag[1] = 0LL;
            while ( *v23 )
              v23 = (_QWORD *)(*v23 + 8LL);
            *v23 = PoolWithTag;
          }
          else
          {
            v15 = -1073741670;
          }
          goto LABEL_22;
        }
      }
      goto LABEL_21;
    }
    if ( !v13 )
    {
      ServiceStartType = PnpGetServiceStartType(DestinationString.Buffer, v11, &v34);
      v19 = v34;
      if ( ServiceStartType < 0 )
        v19 = 4;
      if ( a5 != 3 && !PnPBootDriversInitialized )
      {
        PpInitGetGroupOrderIndex(v11);
        v25 = PnpLoadBootFilterDriver(v11, &UnicodeString);
        v15 = v25;
        if ( v25 < 0 )
        {
          if ( (unsigned int)(v25 + 1073740949) > 1 )
          {
            if ( v19 && !*(_BYTE *)(a4[1] + 4) && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11) )
              *(_BYTE *)(*a4 + 688) = 1;
            v8 = (struct _DMA_ADAPTER *)Handle;
            goto LABEL_22;
          }
          v8 = (struct _DMA_ADAPTER *)Handle;
        }
        else
        {
          v8 = (struct _DMA_ADAPTER *)Handle;
          if ( !Handle )
            goto LABEL_85;
          ObfReferenceObject(Handle);
        }
        goto LABEL_50;
      }
      v20 = a4[1];
      if ( v19 > *(_DWORD *)v20 )
      {
        if ( v19 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
          PipSetDevNodeProblem(*a4, 32LL, 0LL);
      }
      else
      {
        if ( *(_BYTE *)(v20 + 4) )
        {
          Driver = IopLoadDriver(v11);
          v15 = Driver;
          v11 = 0LL;
          v9 = Driver;
          if ( Driver < 0 && Driver != -1073740955 )
          {
            v27 = (unsigned int)(Driver + 1073740961);
            if ( (unsigned int)v27 > 0x2F || (v28 = 0x800000003001LL, !_bittest64(&v28, v27)) )
            {
              if ( v15 != -1073741218 && v15 != -1073741670 && v15 != -1073740760 )
                v15 = -1073741204;
            }
          }
          if ( PnPInitialized )
            IopCallDriverReinitializationRoutines(0LL);
          v8 = (struct _DMA_ADAPTER *)IopReferenceDriverObjectByName(&UnicodeString);
          if ( v8 )
          {
LABEL_35:
            v15 = 0;
            goto LABEL_36;
          }
          if ( !PnpBootMode
            || (unsigned int)(v15 + 1073740961) <= 0xD && (v29 = 12353, _bittest(&v29, v15 + 1073740961))
            || v15 == -1073740760 )
          {
LABEL_85:
            PnpDiagnosticTraceDeviceOperation(
              &KMPnPEvt_DriverLoad_Fail,
              (unsigned __int16 *)(*a4 + 40),
              v15,
              (__int64)&UnicodeString,
              0);
            v30 = *a4;
            if ( (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
            {
              if ( v15 > -1073740955 )
              {
                if ( v15 == -1073740949 )
                {
                  PipSetDevNodeProblem(v30, 48LL, 3221226347LL);
                  PipSetDevNodeFlags(*a4, 0x100000);
                  goto LABEL_22;
                }
                if ( v15 == -1073740948 )
                {
                  PipSetDevNodeFlags(v30, 0x100000);
                  v15 = 0;
                  goto LABEL_22;
                }
                v32 = 3221226382LL;
                if ( v15 == -1073740914 )
                {
                  v33 = 38LL;
                  goto LABEL_98;
                }
                v31 = -1073740760;
                if ( v15 != -1073740760 )
                  goto LABEL_106;
                v33 = 52LL;
              }
              else
              {
                if ( v15 == -1073740955 )
                {
                  v32 = 0LL;
                  v33 = 37LL;
                  goto LABEL_98;
                }
                v31 = -1073741670;
                if ( v15 == -1073741670 )
                {
                  v33 = 3LL;
                }
                else
                {
                  v32 = 3221225824LL;
                  if ( v15 == -1073741472 )
                  {
                    v33 = 40LL;
                    goto LABEL_98;
                  }
                  if ( v15 == -1073741411 )
                    goto LABEL_93;
                  v31 = -1073741218;
                  if ( v15 != -1073741218 )
                  {
                    if ( v15 == -1073741204 )
                    {
LABEL_93:
                      v32 = v9;
                      v33 = 39LL;
LABEL_98:
                      PipSetDevNodeProblem(v30, v33, v32);
                      goto LABEL_22;
                    }
LABEL_106:
                    v32 = (unsigned int)v15;
                    v33 = 31LL;
                    goto LABEL_98;
                  }
                  v33 = 41LL;
                }
              }
              v32 = v31;
              goto LABEL_98;
            }
LABEL_22:
            v10 = v38;
LABEL_23:
            if ( v11 )
              ZwClose(v11);
            if ( v10 )
              RtlFreeAnsiString(&UnicodeString);
            if ( v8 )
              HalPutDmaAdapter(v8);
            return (unsigned int)v15;
          }
          v15 = -1073741204;
LABEL_50:
          if ( !v8 )
            goto LABEL_85;
          goto LABEL_35;
        }
        if ( v19 && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11) )
          *(_BYTE *)(*a4 + 688) = 1;
      }
    }
LABEL_21:
    v15 = -1073741823;
    goto LABEL_22;
  }
  return result;
}
