/*
 * XREFs of ?DxgkpValidateResourcesForPinOperation@@YA_NIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1C0254B40
 * Callers:
 *     ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1C0255D08 (-PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 */

char __fastcall DxgkpValidateResourcesForPinOperation(unsigned int a1, const struct DXGRESOURCEREFERENCE *a2)
{
  bool v4; // r15
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 i; // rbx
  __int64 v12; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() != 0;
  v5 = 0;
  if ( a1 )
  {
    while ( 2 )
    {
      v6 = *(_QWORD *)a2;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(*(_QWORD *)a2 + 80LL), 0);
      if ( v4 )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
      for ( i = *(_QWORD *)(v6 + 24); i; i = *(_QWORD *)(i + 64) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) & 0x2000) != 0 || (*(_DWORD *)(i + 72) & 0x800) != 0 )
        {
          v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
          *(_QWORD *)(v12 + 24) = v6;
          *(_QWORD *)(v12 + 32) = i;
          WdLogEvent5_WdWarning(v12);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
          return 0;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
      ++v5;
      a2 = (const struct DXGRESOURCEREFERENCE *)((char *)a2 + 8);
      if ( v5 < a1 )
        continue;
      break;
    }
  }
  return 1;
}
