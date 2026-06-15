/*
 * XREFs of ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140003A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x140034ACC (-GetCpuManager@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x140034C0C (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 */

__int64 __fastcall GraphStreamingResourceManager::AddToCpuManager(struct CpuManager **this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  int CpuManager; // edi
  _QWORD *v7; // r15
  __int64 StartPosition; // rbx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  struct CpuManager *v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  if ( a2 >= (unsigned int)dword_140085068 )
    goto LABEL_2;
  v7 = this + 34;
  CpuManager = GetCpuManager(this + 34);
  if ( CpuManager >= 0 )
  {
    StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 7);
    if ( StartPosition )
    {
      while ( 1 )
      {
        v9 = StartPosition;
        v10 = *(_QWORD *)(StartPosition + 32);
        if ( !v10 )
        {
          v11 = (unsigned int)(*(_DWORD *)(StartPosition + 40) % *((_DWORD *)this + 18) + 1);
          do
          {
            if ( (unsigned int)v11 >= *((_DWORD *)this + 18) )
              break;
            v12 = this[7];
            if ( *((_QWORD *)v12 + v11) )
              v10 = *((_QWORD *)v12 + v11);
            v11 = (unsigned int)(v11 + 1);
          }
          while ( !v10 );
        }
        StartPosition = v10;
        CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 32LL))(
                       *v7,
                       *(_QWORD *)(v9 + 16),
                       v9 + 24);
        if ( CpuManager < 0 )
          break;
        if ( !StartPosition )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      v13 = this + 16;
      v14 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 16);
      if ( v14 )
      {
        while ( 1 )
        {
          v15 = v14;
          v16 = *(_QWORD *)(v14 + 32);
          if ( !v16 )
          {
            v17 = (unsigned int)(*(_DWORD *)(v14 + 40) % *((_DWORD *)this + 36) + 1);
            do
            {
              if ( (unsigned int)v17 >= *((_DWORD *)this + 36) )
                break;
              if ( *(_QWORD *)(*v13 + 8 * v17) )
                v16 = *(_QWORD *)(*v13 + 8 * v17);
              v17 = (unsigned int)(v17 + 1);
            }
            while ( !v16 );
          }
          v14 = v16;
          CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 48LL))(
                         *v7,
                         *(_QWORD *)(v15 + 16),
                         v15 + 24);
          if ( CpuManager < 0 )
            break;
          if ( !v14 )
            goto LABEL_25;
        }
      }
      else
      {
LABEL_25:
        v18 = this + 25;
        v19 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 25);
        if ( !v19 )
        {
LABEL_2:
          CpuManager = 0;
          goto LABEL_3;
        }
        while ( 1 )
        {
          v20 = v19;
          v21 = *(_QWORD *)(v19 + 32);
          if ( !v21 )
          {
            v22 = (unsigned int)(*(_DWORD *)(v19 + 40) % *((_DWORD *)this + 54) + 1);
            do
            {
              if ( (unsigned int)v22 >= *((_DWORD *)this + 54) )
                break;
              if ( *(_QWORD *)(*v18 + 8 * v22) )
                v21 = *(_QWORD *)(*v18 + 8 * v22);
              v22 = (unsigned int)(v22 + 1);
            }
            while ( !v21 );
          }
          v19 = v21;
          CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 64LL))(
                         *v7,
                         *(_QWORD *)(v20 + 16),
                         v20 + 24);
          if ( CpuManager < 0 )
            break;
          if ( !v19 )
            goto LABEL_2;
        }
      }
    }
    (*((void (__fastcall **)(char *))*(this - 1) + 10))((char *)this - 8);
  }
LABEL_3:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)CpuManager;
}
