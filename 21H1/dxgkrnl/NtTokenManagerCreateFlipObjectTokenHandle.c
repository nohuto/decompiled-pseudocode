/*
 * XREFs of NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C00613E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C00183AC (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C00610B4 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00685A8 (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerToke.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectTokenHandle(
        void *a1,
        unsigned __int64 *a2,
        int a3,
        int a4,
        unsigned int a5,
        struct FlipPropertyItem *a6,
        HANDLE *a7,
        _QWORD *a8)
{
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  int v14; // edi
  struct DXGGLOBAL *Global; // rax
  int ProducerTokenOperation; // eax
  __int64 v17; // r9
  struct DXGGLOBAL *v18; // rax
  unsigned __int64 v20; // [rsp+50h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-88h]
  __int128 v23; // [rsp+68h] [rbp-80h] BYREF
  char v24; // [rsp+78h] [rbp-70h]
  __int64 v25; // [rsp+80h] [rbp-68h]
  __int64 v26; // [rsp+88h] [rbp-60h]
  __int128 v27; // [rsp+90h] [rbp-58h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-48h]
  __int128 v29; // [rsp+B0h] [rbp-38h]

  Handle = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  v22 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  KeEnterCriticalRegion();
  if ( a7 )
  {
    if ( a2 )
    {
      v13 = (ULONG64)(a2 + 1);
      if ( a2 + 1 < a2 || v13 > MmUserProbeAddress )
        a2 = (unsigned __int64 *)MmUserProbeAddress;
      v11 = *a2;
      v22 = *a2;
    }
    Global = DXGGLOBAL::GetGlobal(v13, v12);
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*((_QWORD *)Global + 38033) + 192LL))(
            0x80000000LL,
            &v20);
    if ( v14 >= 0 )
    {
      ProducerTokenOperation = FlipManagerCreateProducerTokenOperation(
                                 a1,
                                 a3 != 0,
                                 a4 != 0,
                                 v11,
                                 a5,
                                 a6,
                                 (struct FlipManagerTokenInitInfo *)&v23);
      v14 = ProducerTokenOperation;
      if ( ProducerTokenOperation >= 0 )
      {
        if ( v26 )
        {
          if ( !v24 )
            ProducerTokenOperation = -1073741811;
          v14 = ProducerTokenOperation;
        }
        if ( v14 >= 0 )
        {
          LODWORD(v27) = 48;
          *((_QWORD *)&v27 + 1) = 0LL;
          DWORD2(v28) = 0;
          *(_QWORD *)&v28 = 0LL;
          v29 = v20;
          v14 = DxgkCompositionObject::Create(
                  0LL,
                  (__int64)&v27,
                  3u,
                  v17,
                  5,
                  152,
                  (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
                  (__int64)&v23,
                  &Handle);
          if ( v14 >= 0 )
          {
            v12 = (__int64)a8;
            if ( a8 )
            {
              if ( a8 + 1 < a8 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              *a8 = v25;
            }
            v13 = (ULONG64)(a7 + 1);
            if ( a7 + 1 < a7 || v13 > MmUserProbeAddress )
            {
              v13 = MmUserProbeAddress;
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            *a7 = Handle;
            Handle = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v14 = -1073741811;
  }
  if ( v20 )
  {
    v18 = DXGGLOBAL::GetGlobal(v13, v12);
    (*(void (__fastcall **)(unsigned __int64))(*((_QWORD *)v18 + 38033) + 312LL))(v20);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v23);
  return (unsigned int)v14;
}
