/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140063980
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015E30 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 *     memcpy_0 @ 0x140029E1F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062A60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  UINT32 u32ValidFrameCount; // r14d
  unsigned int v3; // esi
  signed __int64 v6; // rax
  CCrossProcessBaseEndpoint *v7; // r12
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int32 v12; // ecx
  unsigned int v13; // ebp
  void *v14; // rcx
  int v15; // edx
  unsigned int v16; // ebp
  void *v17; // rcx
  int v18; // ebx
  int v19; // edx
  size_t v20; // r8
  __int64 v21; // rcx
  void *v22; // rax
  void *v23; // rax
  void *v24; // rax

  u32ValidFrameCount = a2->u32ValidFrameCount;
  LOBYTE(v3) = 0;
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 16LL), 0LL, 0LL);
  v7 = (CCrossProcessClientOutputEndpoint *)((char *)this - 448);
  v8 = v6;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, (__int64)a2, (__int64)this - 448, 19, u32ValidFrameCount, v6, 0);
  if ( CCrossProcessBaseEndpoint::IsValidOffset(v7, v8) )
  {
    if ( u32ValidFrameCount )
    {
      v10 = *((unsigned int *)this - 74);
      v11 = *((_QWORD *)this - 46);
      v3 = u32ValidFrameCount * *((_DWORD *)this - 90);
      v9 = *(_DWORD *)(v11 + 160) + (unsigned int)(v8 % v10);
      if ( (unsigned int)v9 <= *(_DWORD *)(v11 + 164) )
      {
        if ( u32ValidFrameCount >= *((_DWORD *)this + 5) || (v12 = 1, (*((_BYTE *)this - 272) & 1) == 0) )
          v12 = 0;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 47) + 176LL), v12);
        v10 = *((unsigned int *)this + 4);
        if ( (_DWORD)v10 )
        {
          if ( (_DWORD)v10 != 1 )
            goto LABEL_30;
          v13 = *(_DWORD *)(*((_QWORD *)this - 46) + 164LL);
          if ( (unsigned int)v9 + v3 <= v13 )
          {
            if ( v3 <= v13 )
            {
              v14 = (void *)(*((_QWORD *)this - 47) + (unsigned int)v9);
              if ( a2->u32BufferFlags == BUFFER_VALID )
              {
                memcpy_0(v14, *((const void **)this - 42), v3);
              }
              else
              {
                v15 = 128;
                if ( *((_DWORD *)this - 86) != 8 )
                  v15 = 0;
                memset_0(v14, v15, v3);
              }
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 16LL), v3);
            }
            goto LABEL_30;
          }
          v16 = v13 - v9;
          v17 = (void *)(*((_QWORD *)this - 47) + (unsigned int)v9);
          if ( a2->u32BufferFlags == BUFFER_VALID )
          {
            memcpy_0(v17, *((const void **)this - 42), v16);
            memcpy_0(
              (void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 160LL)),
              (const void *)(v16 + *((_QWORD *)this - 42)),
              v3 - v16);
LABEL_29:
            v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 16LL), v3);
            goto LABEL_30;
          }
          v18 = 128;
          v19 = 128;
          if ( *((_DWORD *)this - 86) != 8 )
            v19 = 0;
          memset_0(v17, v19, v16);
          v20 = v3 - v16;
          v21 = *(unsigned int *)(*((_QWORD *)this - 46) + 160LL);
        }
        else
        {
          if ( a2->u32BufferFlags != BUFFER_SILENT )
            goto LABEL_29;
          v20 = v3;
          v18 = 128;
          v21 = (unsigned int)v9;
        }
        if ( *((_DWORD *)this - 86) != 8 )
          v18 = 0;
        memset_0((void *)(*((_QWORD *)this - 47) + v21), v18, v20);
        goto LABEL_29;
      }
    }
  }
LABEL_30:
  if ( *((_QWORD *)this - 3) )
  {
    v22 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2) + 24LL))(*((_QWORD *)this - 2));
    ResetEvent(v22);
    v23 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 3) + 24LL))(*((_QWORD *)this - 3));
    SetEvent(v23);
    v24 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2) + 24LL))(*((_QWORD *)this - 2));
    WaitForSingleObject(v24, 0xFFFFFFFF);
  }
  *((_DWORD *)this + 4) = 3;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v10, v9, (__int64)v7, 20, u32ValidFrameCount, v8, v3);
}
