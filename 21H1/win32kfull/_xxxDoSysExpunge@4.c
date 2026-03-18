/*
 * XREFs of _xxxDoSysExpunge@4 @ 0xD2E12
 * Callers:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0x16A32 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ.c)
 *     _ClientFreeLibrary@4 @ 0xD2F16 (_ClientFreeLibrary@4.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0xD2FCE (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ.c)
 *     ___report_rangecheckfailure @ 0xED862 (___report_rangecheckfailure.c)
 */

void __thiscall xxxDoSysExpunge(_DWORD *this)
{
  _DWORD *v1; // ebx
  unsigned int v2; // esi
  int v3; // edi
  int v4; // edx
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  bool v9; // zf
  tagDomLock *v10; // [esp+10h] [ebp-10h] BYREF
  tagDomLock *v11; // [esp+14h] [ebp-Ch] BYREF
  int v12; // [esp+18h] [ebp-8h]
  _DWORD *v13; // [esp+1Ch] [ebp-4h]

  v1 = this;
  v13 = this;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v10);
  v2 = 0;
  *(_DWORD *)(v1[58] + 220) = _gcSysExpunge;
  if ( catomSysTableEntries > 0 )
  {
    v3 = 57;
    do
    {
      if ( !dword_272704[v3] )
      {
        v4 = *((unsigned __int16 *)&aatomSysLoaded + v2);
        if ( (_WORD)v4 )
        {
          v5 = v1[58];
          if ( ((1 << v2) & *(_DWORD *)(v5 + 224)) != 0 )
          {
            v6 = *(_DWORD *)(v3 * 4 + v5);
            *(_DWORD *)(v3 * 4 + v5) = 0;
            v1 = v13;
            v12 = v6;
            v7 = v13[58];
            v8 = *(_DWORD *)(v7 + 224) & ~(1 << v2);
            v9 = dword_27383C[v3]-- == 1;
            *(_DWORD *)(v7 + 224) = v8;
            if ( v9 )
            {
              UserDeleteAtomFromAtomTable(_UserLibmgmtAtomTableHandle, v4);
              if ( v2 >= 0x20 )
                __report_rangecheckfailure();
              *((_WORD *)&aatomSysLoaded + v2) = 0;
              gdwSysExpungeMask &= ~(1 << v2);
            }
            CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v11);
            ClientFreeLibrary(v12);
            tagDomLock::LockExclusive(v11);
          }
          else
          {
            v1 = v13;
          }
        }
      }
      ++v2;
      ++v3;
    }
    while ( (int)v2 < catomSysTableEntries );
  }
  tagDomLock::UnLockExclusive(v10);
}
