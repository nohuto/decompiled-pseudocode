/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800E7A34
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180043280 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18005E6AC (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800E7C58 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_RegisterForNotifications(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS *a4)
{
  char *v6; // rcx
  struct CChannelContext **v7; // r8
  __int64 v8; // rax
  unsigned int v9; // r9d
  struct CChannelContext **v10; // rdx
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // eax
  __int64 v17; // rcx
  unsigned int i; // eax
  int v19; // [rsp+30h] [rbp-28h] BYREF
  __int128 v20; // [rsp+34h] [rbp-24h]
  __int64 v21; // [rsp+44h] [rbp-14h]
  volatile signed __int32 *v22; // [rsp+68h] [rbp+10h] BYREF

  v22 = (volatile signed __int32 *)a2;
  v6 = (char *)this + 544;
  v7 = *(struct CChannelContext ***)v6;
  if ( *((_BYTE *)a4 + 4) )
  {
    v8 = *((unsigned int *)v6 + 6);
    v9 = 0;
    if ( (_DWORD)v8 )
    {
      v10 = *(struct CChannelContext ***)v6;
      do
      {
        if ( a2 == *v10 )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < (unsigned int)v8 );
    }
    if ( v9 == *((_DWORD *)this + 142) )
    {
      v11 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        if ( v11 <= *((_DWORD *)v6 + 5) )
        {
          v7[v8] = a2;
          *((_DWORD *)v6 + 6) = v11;
          goto LABEL_10;
        }
        v12 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v6, 8u, (__int64)v7, &v22);
        v14 = v12;
        if ( v12 >= 0 )
        {
LABEL_10:
          CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v22 + 2));
          v19 = 5;
          v21 = 0LL;
          v15 = *((_DWORD *)this + 118);
          v20 = 0LL;
          DWORD1(v20) = v15;
          DWORD2(v20) = v15;
          CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v19);
          return 0LL;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xC0u);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v14, 0x451u);
    }
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)v6 + 6); ++v7 )
    {
      if ( a2 == *v7 )
        break;
      ++i;
    }
    if ( i < *((_DWORD *)this + 142) && (unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)v6, &v22) )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v22);
  }
  return 0LL;
}
