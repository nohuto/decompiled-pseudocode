/*
 * XREFs of PopDiagTraceFirmwareS3Stats @ 0x1409B3064
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void PopDiagTraceFirmwareS3Stats()
{
  unsigned int *PoolWithTag; // rbx
  unsigned int *i; // rdi
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // kr08_8
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-11h] BYREF
  int v6; // [rsp+54h] [rbp-Dh] BYREF
  ULONGLONG pullResult; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v8; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+Fh] BYREF
  unsigned __int64 *v11; // [rsp+80h] [rbp+1Fh]
  __int64 v12; // [rsp+88h] [rbp+27h]
  int *v13; // [rsp+90h] [rbp+2Fh]
  __int64 v14; // [rsp+98h] [rbp+37h]

  v6 = 0;
  NumberOfBytes = 0LL;
  v5 = 0;
  pullResult = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140C00A68[0])(
         35LL,
         0LL,
         0LL,
         &NumberOfBytes) == -1073741820 )
  {
    if ( (_DWORD)NumberOfBytes )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x74703353u);
      if ( PoolWithTag )
      {
        if ( ((int (__fastcall *)(__int64, _QWORD, unsigned int *, SIZE_T *))off_140C00A68[0])(
               35LL,
               (unsigned int)NumberOfBytes,
               PoolWithTag,
               &NumberOfBytes) >= 0 )
        {
          for ( i = PoolWithTag + 2;
                i < (unsigned int *)((char *)PoolWithTag + PoolWithTag[1]);
                i = (unsigned int *)((char *)i + *((char *)i + 2)) )
          {
            if ( *(_WORD *)i )
            {
              if ( *(_WORD *)i == 1 )
              {
                v8 = *(_QWORD *)(i + 1) / 0xF4240uLL;
                v3 = *(_QWORD *)(i + 3);
                *(_QWORD *)&UserData.Size = 8LL;
                UserData.Ptr = (ULONGLONG)&v8;
                v11 = &v9;
                v9 = v3 / 0xF4240;
                v12 = 8LL;
                EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_SUSPEND, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
              }
            }
            else
            {
              v5 = i[1];
              HIDWORD(NumberOfBytes) = *((_QWORD *)i + 1) / 0xF4240uLL;
              v2 = *((_QWORD *)i + 2);
              *(_QWORD *)&UserData.Size = 4LL;
              UserData.Ptr = (ULONGLONG)&v5;
              v11 = (SIZE_T *)((char *)&NumberOfBytes + 4);
              v13 = &v6;
              v6 = v2 / 0xF4240;
              v12 = 4LL;
              v14 = 4LL;
              EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_RESUME, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
              if ( !qword_140C23F88 )
              {
                RtlULongLongMult(HIDWORD(NumberOfBytes), PopQpcFrequency, &pullResult);
                pullResult /= 0x3E8uLL;
                qword_140C23F88 = pullResult;
              }
            }
          }
        }
        ExFreePoolWithTag(PoolWithTag, NumberOfBytes);
      }
    }
  }
}
