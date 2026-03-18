/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x14067B998
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x14077386C (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1402D20D4 (PnpDiagnosticTraceDeviceOperation.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PnpIsLegacyDriver @ 0x14067A4A0 (PnpIsLegacyDriver.c)
 *     PnpGetServiceStartType @ 0x14067AEF8 (PnpGetServiceStartType.c)
 *     PipOpenServiceEnumKeys @ 0x14067B470 (PipOpenServiceEnumKeys.c)
 *     IopGetDriverNameFromKeyNode @ 0x14067B694 (IopGetDriverNameFromKeyNode.c)
 *     IopReferenceDriverObjectByName @ 0x14067BCBC (IopReferenceDriverObjectByName.c)
 *     IopCallDriverReinitializationRoutines @ 0x1406DE8A0 (IopCallDriverReinitializationRoutines.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140851818 (PnpCheckPossibleBootStartDriver.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     PpInitGetGroupOrderIndex @ 0x140B1244C (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140B127A0 (PnpLoadBootFilterDriver.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  char v5; // r15
  const WCHAR *v6; // rbx
  _DWORD *v8; // rsi
  unsigned int v9; // r13d
  char v10; // r12
  HANDLE v11; // r14
  __int16 v12; // r8
  int v13; // ecx
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  int DriverNameFromKeyNode; // eax
  int ServiceStartType; // eax
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  _QWORD *Pool2; // rax
  int Driver; // eax
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

  v5 = 0;
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
  if ( a1 != 1 || a3 <= 2 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v12 = 92;
  v13 = 0;
  while ( DestinationString.Buffer[v13] == v12 )
  {
    ++v6;
    ++v13;
    v12 = *v6;
    if ( !*v6 )
    {
      RtlInitUnicodeString(&UnicodeString, DestinationString.Buffer);
      v5 = 1;
LABEL_9:
      v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
      Handle = v8;
      if ( v8 )
        goto LABEL_28;
      if ( !v5 )
      {
        ServiceStartType = PnpGetServiceStartType((int)DestinationString.Buffer, v11, &v34);
        v18 = v34;
        if ( ServiceStartType < 0 )
          v18 = 4;
        if ( a5 != 3 && !PnPBootDriversInitialized )
        {
          PpInitGetGroupOrderIndex(v11);
          v25 = PnpLoadBootFilterDriver(v11, &UnicodeString);
          v15 = v25;
          if ( v25 >= 0 )
          {
            v8 = Handle;
            if ( Handle )
            {
              ObfReferenceObject(Handle);
              goto LABEL_47;
            }
LABEL_83:
            PnpDiagnosticTraceDeviceOperation(
              &KMPnPEvt_DriverLoad_Fail,
              (unsigned __int16 *)(*a4 + 40),
              v15,
              (__int64)&UnicodeString,
              0);
            v30 = *a4;
            if ( (*(_DWORD *)(*a4 + 396) & 0x6000) != 0 )
              goto LABEL_20;
            if ( (int)v15 <= -1073740955 )
            {
              if ( v15 == -1073740955 )
              {
                v32 = 0LL;
                v33 = 37LL;
                goto LABEL_96;
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
                  goto LABEL_96;
                }
                if ( v15 == -1073741411 )
                  goto LABEL_91;
                v31 = -1073741218;
                if ( v15 != -1073741218 )
                {
                  if ( v15 == -1073741204 )
                  {
LABEL_91:
                    v32 = v9;
                    v33 = 39LL;
                    goto LABEL_96;
                  }
LABEL_104:
                  v32 = v15;
                  v33 = 31LL;
LABEL_96:
                  PipSetDevNodeProblem(v30, v33, v32);
LABEL_20:
                  v10 = v38;
                  goto LABEL_21;
                }
                v33 = 41LL;
              }
LABEL_94:
              v32 = v31;
              goto LABEL_96;
            }
            if ( v15 == -1073740949 )
            {
              PipSetDevNodeProblem(v30, 48LL, 3221226347LL);
              PipSetDevNodeFlags(*a4, 0x100000LL);
              goto LABEL_20;
            }
            if ( v15 != -1073740948 )
            {
              v32 = 3221226382LL;
              if ( v15 == -1073740914 )
              {
                v33 = 38LL;
                goto LABEL_96;
              }
              v31 = -1073740760;
              if ( v15 != -1073740760 )
                goto LABEL_104;
              v33 = 52LL;
              goto LABEL_94;
            }
            PipSetDevNodeFlags(v30, 0x100000LL);
LABEL_50:
            v15 = 0;
            goto LABEL_20;
          }
          if ( (unsigned int)(v25 + 1073740949) > 1 )
          {
            if ( v18 && !*(_BYTE *)(a4[1] + 4) && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11) )
              *(_BYTE *)(*a4 + 688) = 1;
            v8 = Handle;
            goto LABEL_20;
          }
          v8 = Handle;
LABEL_47:
          if ( !v8 )
            goto LABEL_83;
          goto LABEL_28;
        }
        v19 = a4[1];
        if ( v18 > *(_DWORD *)v19 )
        {
          if ( v18 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
            PipSetDevNodeProblem(*a4, 32LL, 0LL);
        }
        else if ( *(_BYTE *)(v19 + 4) )
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
          v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
          if ( !v8 )
          {
            if ( !PnpBootMode )
              goto LABEL_83;
            if ( v15 + 1073740961 <= 0xD )
            {
              v29 = 12353;
              if ( _bittest(&v29, v15 + 1073740961) )
                goto LABEL_83;
            }
            if ( v15 == -1073740760 )
              goto LABEL_83;
            v15 = -1073741204;
            goto LABEL_47;
          }
LABEL_28:
          if ( (v8[4] & 0x10) != 0 )
          {
            if ( PnpIsLegacyDriver((__int64)v8) )
            {
              if ( a5 != 3 )
                goto LABEL_50;
              PipSetDevNodeFlags(*a4, 4096LL);
              PipSetDevNodeState(*a4, 778);
            }
            else if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 771) <= 2 )
            {
              v22 = (__int64 *)((char *)&a4[a5] + v21);
              v15 = 0;
              Pool2 = (_QWORD *)ExAllocatePool2(256LL, v21, 1852141648LL);
              if ( Pool2 )
              {
                *Pool2 = v8;
                v8 = 0LL;
                Pool2[1] = 0LL;
                while ( *v22 )
                  v22 = (_QWORD *)(*v22 + 8LL);
                *v22 = Pool2;
              }
              else
              {
                v15 = -1073741670;
              }
              goto LABEL_20;
            }
          }
        }
        else if ( v18 && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11) )
        {
          *(_BYTE *)(*a4 + 688) = 1;
        }
      }
      v15 = -1073741823;
      goto LABEL_20;
    }
  }
  if ( !*(_WORD *)(*a4 + 56) )
  {
    *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
    *(_QWORD *)(*a4 + 64) = ExAllocatePool2(256LL, DestinationString.MaximumLength, 1215327824LL);
    v26 = *(void **)(*a4 + 64);
    if ( !v26 )
    {
      *(_WORD *)(*a4 + 58) = 0;
      v15 = -1073741823;
      *(_WORD *)(*a4 + 56) = 0;
      *(_QWORD *)(*a4 + 64) = 0LL;
      return v15;
    }
    memmove(v26, DestinationString.Buffer, DestinationString.MaximumLength);
  }
  v14 = PipOpenServiceEnumKeys(&DestinationString, 0x20019u, &Handle, 0LL, 0);
  v15 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 || a5 )
      PipSetDevNodeProblem(*a4, 19LL, (unsigned int)v14);
    else
      v15 = 0;
    v11 = Handle;
  }
  else
  {
    v11 = Handle;
    DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &UnicodeString);
    v15 = DriverNameFromKeyNode;
    if ( DriverNameFromKeyNode >= 0 )
    {
      v38 = 1;
      goto LABEL_9;
    }
    PipSetDevNodeProblem(*a4, 19LL, (unsigned int)DriverNameFromKeyNode);
  }
LABEL_21:
  if ( v11 )
    ZwClose(v11);
  if ( v10 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    ObfDereferenceObject(v8);
  return v15;
}
