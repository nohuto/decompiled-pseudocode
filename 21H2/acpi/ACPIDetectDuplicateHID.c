/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C001ADF4
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C001A380 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017F20 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x1C001AD98 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001B0F0 (ACPIExtListEnumNext.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 */

void __fastcall ACPIDetectDuplicateHID(char *BugCheckParameter2)
{
  __int64 v1; // rdx
  char *i; // rax
  char *v4; // rdi
  const char *v5; // rcx
  const char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int8 *v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  int v12; // ecx
  void *v13; // rax
  void *v14; // r8
  void *v15; // rax
  void *v16; // r8
  _QWORD v17[2]; // [rsp+58h] [rbp+17h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp+27h]
  KIRQL NewIrql[16]; // [rsp+70h] [rbp+2Fh]
  __int64 v20; // [rsp+80h] [rbp+3Fh]
  int v21; // [rsp+88h] [rbp+47h]
  int v22; // [rsp+8Ch] [rbp+4Bh]

  v22 = 0;
  v1 = *((_QWORD *)BugCheckParameter2 + 94);
  *(_OWORD *)NewIrql = 0LL;
  if ( v1
    && (*((_QWORD *)BugCheckParameter2 + 1) & 0xA00000000000LL) != 0
    && (*((_QWORD *)BugCheckParameter2 + 1) & 0x2000000000003LL) == 0 )
  {
    v17[1] = 0LL;
    v17[0] = v1 + 760;
    v20 = 776LL;
    SpinLock = &AcpiDeviceTreeLock;
    v21 = 2;
    for ( i = ACPIExtListStartEnum((__int64)v17); ; i = (char *)ACPIExtListEnumNext(v17) )
    {
      v4 = i;
      if ( *(_QWORD *)&NewIrql[8] + v20 == v17[0] )
      {
        if ( !v21 )
          return;
        goto LABEL_15;
      }
      if ( v21 == 1 )
      {
        ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      }
      if ( !v4 )
        break;
      if ( v4 != BugCheckParameter2
        && (*((_QWORD *)v4 + 1) & 0xA00000000000LL) != 0
        && (*((_QWORD *)v4 + 1) & 0x2080000000003LL) == 0 )
      {
        v5 = (const char *)*((_QWORD *)v4 + 71);
        if ( v5 )
        {
          v6 = (const char *)*((_QWORD *)BugCheckParameter2 + 71);
          if ( v6 )
          {
            if ( strstr(v5, v6) )
            {
              v7 = *((_QWORD *)v4 + 1);
              v8 = *((_QWORD *)BugCheckParameter2 + 1);
              if ( (v7 & 0x1400000000000LL) != 0 && (v8 & 0x1400000000000LL) != 0 )
              {
                v9 = (unsigned __int8 *)*((_QWORD *)v4 + 72);
                v10 = *((_QWORD *)BugCheckParameter2 + 72) - (_QWORD)v9;
                do
                {
                  v11 = v9[v10];
                  v12 = *v9 - v11;
                  if ( v12 )
                    break;
                  ++v9;
                }
                while ( v11 );
                if ( !v12 )
                {
                  v15 = &unk_1C00701BA;
                  v16 = &unk_1C00701BA;
                  if ( (v8 & 0x200000000000LL) != 0 )
                  {
                    v15 = (void *)*((_QWORD *)BugCheckParameter2 + 71);
                    if ( (v8 & 0x400000000000LL) != 0 )
                      v16 = (void *)*((_QWORD *)BugCheckParameter2 + 72);
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v8) = 2;
                    WPP_RECORDER_SF_qqss(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v8,
                      22,
                      13,
                      (__int64)&WPP_c0e337b8db3d3f7e68015837118db5e6_Traceguids,
                      (char)v4,
                      (char)BugCheckParameter2,
                      (__int64)v15,
                      (__int64)v16);
                  }
                  KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
                }
              }
              else if ( ((v8 | v7) & 0x1400000000000LL) == 0 )
              {
                v13 = &unk_1C00701BA;
                v14 = &unk_1C00701BA;
                if ( (v8 & 0x200000000000LL) != 0 )
                {
                  v13 = (void *)*((_QWORD *)BugCheckParameter2 + 71);
                  if ( (v8 & 0x400000000000LL) != 0 )
                    v14 = (void *)*((_QWORD *)BugCheckParameter2 + 72);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v8) = 2;
                  WPP_RECORDER_SF_qqss(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v8,
                    22,
                    14,
                    (__int64)&WPP_c0e337b8db3d3f7e68015837118db5e6_Traceguids,
                    (char)v4,
                    (char)BugCheckParameter2,
                    (__int64)v13,
                    (__int64)v14);
                }
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
    if ( v21 == 2 )
LABEL_15:
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
  }
}
