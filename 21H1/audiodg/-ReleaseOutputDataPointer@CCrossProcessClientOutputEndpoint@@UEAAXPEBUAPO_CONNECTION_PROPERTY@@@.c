/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14005AD50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015F10 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140059E60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  CCrossProcessBaseEndpoint *v2; // r12
  UINT32 u32ValidFrameCount; // r14d
  unsigned int v6; // esi
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int32 v11; // ecx
  unsigned int v12; // ebp
  void *v13; // rcx
  int v14; // edx
  unsigned int v15; // ebp
  void *v16; // rcx
  int v17; // ebx
  int v18; // edx
  size_t v19; // r8
  __int64 v20; // rcx
  void *v21; // rax
  void *v22; // rax
  void *v23; // rax

  v2 = (CCrossProcessClientOutputEndpoint *)((char *)this - 448);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  LOBYTE(v6) = 0;
  v7 = *(_QWORD *)(*((_QWORD *)this - 47) + 16LL);
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, (__int64)a2, (__int64)this - 448, 19, u32ValidFrameCount, v7, 0);
  if ( CCrossProcessBaseEndpoint::IsValidOffset(v2, v7) )
  {
    if ( u32ValidFrameCount )
    {
      v9 = *((unsigned int *)this - 74);
      v10 = *((_QWORD *)this - 46);
      v6 = u32ValidFrameCount * *((_DWORD *)this - 90);
      v8 = *(_DWORD *)(v10 + 160) + (unsigned int)(v7 % v9);
      if ( (unsigned int)v8 <= *(_DWORD *)(v10 + 164) )
      {
        if ( u32ValidFrameCount >= *((_DWORD *)this + 5) || (v11 = 1, (*((_BYTE *)this - 272) & 1) == 0) )
          v11 = 0;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 47) + 176LL), v11);
        v9 = *((unsigned int *)this + 4);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 != 1 )
            goto LABEL_30;
          v12 = *(_DWORD *)(*((_QWORD *)this - 46) + 164LL);
          if ( (unsigned int)v8 + v6 <= v12 )
          {
            if ( v6 <= v12 )
            {
              v13 = (void *)(*((_QWORD *)this - 47) + (unsigned int)v8);
              if ( a2->u32BufferFlags == BUFFER_VALID )
              {
                memcpy_0(v13, *((const void **)this - 42), v6);
              }
              else
              {
                v14 = 128;
                if ( *((_DWORD *)this - 86) != 8 )
                  v14 = 0;
                memset_0(v13, v14, v6);
              }
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 16LL), v6);
            }
            goto LABEL_30;
          }
          v15 = v12 - v8;
          v16 = (void *)(*((_QWORD *)this - 47) + (unsigned int)v8);
          if ( a2->u32BufferFlags == BUFFER_VALID )
          {
            memcpy_0(v16, *((const void **)this - 42), v15);
            memcpy_0(
              (void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 160LL)),
              (const void *)(v15 + *((_QWORD *)this - 42)),
              v6 - v15);
LABEL_29:
            v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 16LL), v6);
            goto LABEL_30;
          }
          v17 = 128;
          v18 = 128;
          if ( *((_DWORD *)this - 86) != 8 )
            v18 = 0;
          memset_0(v16, v18, v15);
          v19 = v6 - v15;
          v20 = *(unsigned int *)(*((_QWORD *)this - 46) + 160LL);
        }
        else
        {
          if ( a2->u32BufferFlags != BUFFER_SILENT )
            goto LABEL_29;
          v19 = v6;
          v17 = 128;
          v20 = (unsigned int)v8;
        }
        if ( *((_DWORD *)this - 86) != 8 )
          v17 = 0;
        memset_0((void *)(*((_QWORD *)this - 47) + v20), v17, v19);
        goto LABEL_29;
      }
    }
  }
LABEL_30:
  if ( *((_QWORD *)this - 3) )
  {
    v21 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2) + 24LL))(*((_QWORD *)this - 2));
    ResetEvent(v21);
    v22 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 3) + 24LL))(*((_QWORD *)this - 3));
    SetEvent(v22);
    v23 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2) + 24LL))(*((_QWORD *)this - 2));
    WaitForSingleObject(v23, 0xFFFFFFFF);
  }
  *((_DWORD *)this + 4) = 3;
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v9, v8, (__int64)v2, 20, u32ValidFrameCount, v7, v6);
}
