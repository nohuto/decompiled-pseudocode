/*
 * XREFs of ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@_N@Z @ 0x1C00178C8
 * Callers:
 *     ?GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C00178B0 (-GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0065F28 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     wcsrchr_0 @ 0x1C00243AF (wcsrchr_0.c)
 */

__int64 __fastcall CFlipExBuffer::GetInfoInternal(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2, char a3)
{
  unsigned int v6; // eax
  unsigned int v7; // r9d
  __int64 *i; // rdx
  __int128 v9; // xmm1
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v14; // rax
  const wchar_t **v15; // rax
  const wchar_t **v16; // rdi
  wchar_t *v17; // rax
  wchar_t *v18; // rcx
  _WORD *v19; // rdx
  __int64 v20; // r8
  signed __int64 v21; // rcx
  __int16 v22; // ax
  _WORD *v23; // rax
  __m256i ClientId; // [rsp+30h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+B0h] [rbp+30h] BYREF
  void *ProcessHandle; // [rsp+B8h] [rbp+38h] BYREF

  *(_DWORD *)a2 = 2;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
  *((_QWORD *)a2 + 16) = *((_QWORD *)this + 20);
  *((_QWORD *)a2 + 111) = *((_QWORD *)this + 36);
  *((_QWORD *)a2 + 112) = 0LL;
  *((_QWORD *)a2 + 113) = 0LL;
  *((_DWORD *)a2 + 34) = 0;
  *((_DWORD *)a2 + 35) = *((_DWORD *)this + 60);
  v6 = *((_DWORD *)this + 60);
  if ( v6 )
  {
    if ( v6 > 1 )
    {
      v14 = *((unsigned int *)this + 144);
      if ( (_DWORD)v14 )
      {
        ProcessHandle = 0LL;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        *(_OWORD *)ClientId.m256i_i8 = v14;
        if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, (PCLIENT_ID)&ClientId) >= 0 )
        {
          ProcessInformationLength = 0;
          if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength) == -1073741820
            && ProcessInformationLength >= 0x10 )
          {
            v15 = (const wchar_t **)operator new(ProcessInformationLength + 2LL, 0x624D5343u, 0, PagedPool);
            v16 = v15;
            if ( v15 )
            {
              if ( ZwQueryInformationProcess(
                     ProcessHandle,
                     ProcessImageFileNameWin32,
                     v15,
                     ProcessInformationLength,
                     0LL) >= 0 )
              {
                v17 = wcsrchr_0(v16[1], 0x5Cu);
                if ( v17 )
                  v18 = v17 + 1;
                else
                  v18 = (wchar_t *)v16[1];
                v19 = (_WORD *)((char *)a2 + 912);
                v20 = 64LL;
                v21 = (char *)v18 - ((char *)a2 + 912);
                do
                {
                  if ( v20 == -2147483582 )
                    break;
                  v22 = *(_WORD *)((char *)v19 + v21);
                  if ( !v22 )
                    break;
                  *v19++ = v22;
                  --v20;
                }
                while ( v20 );
                v23 = v19 - 1;
                if ( v20 )
                  v23 = v19;
                *v23 = 0;
              }
              ExFreePoolWithTag(v16, 0);
            }
          }
          ZwClose(ProcessHandle);
        }
      }
    }
    v7 = 0;
    *((_DWORD *)a2 + 34) = *(_DWORD *)(*((_QWORD *)this + 28) + 16LL);
    for ( i = (__int64 *)*((_QWORD *)this + 28); i != (__int64 *)((char *)this + 224); i = (__int64 *)*i )
    {
      v9 = *((_OWORD *)i + 2);
      *(_OWORD *)ClientId.m256i_i8 = *((_OWORD *)i + 1);
      *(_OWORD *)&ClientId.m256i_u64[2] = v9;
      if ( a3 )
        ClientId.m256i_i64[1] = i[6];
      v10 = ClientId.m256i_i64[3];
      v11 = v7++ + 6LL;
      v12 = 3 * v11;
      *(_OWORD *)((char *)a2 + 8 * v12) = *(_OWORD *)&ClientId.m256i_u64[1];
      *((_QWORD *)a2 + v12 + 2) = v10;
    }
  }
  return 0LL;
}
