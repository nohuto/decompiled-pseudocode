/*
 * XREFs of ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C02B340C
 * Callers:
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B35AC (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C004D734 (-GetUsedEntryCount@HMGRTABLE@@QEAAIXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C010B190 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011E138 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C01629D0 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 */

void __fastcall DXGCHANNELENDPOINTPROXY::NotifyChannelClosed(DXGCHANNELENDPOINTPROXY *this)
{
  __int64 v2; // rdx
  _QWORD *v3; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int UsedEntryCount; // r15d
  __int64 v8; // rax
  unsigned int EntryType; // r14d
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGCHANNELENDPOINTPROXY *)((char *)this + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v3 = (_QWORD *)((char *)this + 40);
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    v4 = 0;
    v5 = 0;
    UsedEntryCount = HMGRTABLE::GetUsedEntryCount((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v2);
    if ( UsedEntryCount )
    {
      do
      {
        if ( v5 >= *((_DWORD *)this + 14) )
        {
          v8 = WdLogNewEntry5_WdAssertion(v6, v2);
          *(_QWORD *)(v8 + 24) = 878LL;
          WdLogEvent5_WdAssertion(v8);
        }
        EntryType = HMGRTABLE::GetEntryType((__int64)this + 40, v5);
        if ( !EntryType )
          goto LABEL_16;
        v10 = HMGRTABLE::BuildEntryHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v5);
        v11 = v10;
        v12 = (v10 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v12 < *((_DWORD *)this + 14) )
        {
          v13 = *(_DWORD *)(*v3 + 16 * v12 + 8);
          if ( ((v10 >> 25) & 0x60) == (v13 & 0x60) && (v13 & 0x2000) == 0 && (v13 & 0x1F) != 0 )
          {
            v14 = v13 & 0x1F;
            if ( EntryType == (_DWORD)v14 )
            {
              v16 = *(_QWORD *)(*v3 + 16LL * (unsigned int)v12);
              goto LABEL_13;
            }
            v15 = WdLogNewEntry5_WdError((v10 >> 25) & 0x60, v14);
            *(_QWORD *)(v15 + 24) = 316LL;
            WdLogEvent5_WdError(v15);
          }
        }
        v16 = 0LL;
LABEL_13:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 16LL))(
               *((_QWORD *)this + 16),
               EntryType,
               v16) )
        {
          HMGRTABLE::FreeHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v11);
        }
        ++v4;
LABEL_16:
        ++v5;
      }
      while ( v4 < UsedEntryCount );
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v2);
}
