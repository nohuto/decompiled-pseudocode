/*
 * XREFs of MiFindNextEnclaveBoundary @ 0x1406E6DA0
 * Callers:
 *     MmCopyVirtualMemory @ 0x1406E6510 (MmCopyVirtualMemory.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFindNextEnclaveBoundary(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rdi
  unsigned int v10; // ebp
  unsigned __int64 i; // rdx
  char v13; // al
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  _OWORD v20[3]; // [rsp+20h] [rbp-68h] BYREF

  memset(v20, 0, sizeof(v20));
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( Process != (_KPROCESS *)a1 )
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v20);
  v10 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1680) + 296LL) )
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
    i = *(_QWORD *)(a1 + 2008);
    v13 = 0;
    if ( i )
    {
      v14 = a2 >> 12;
      while ( 1 )
      {
        if ( v14 > (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) )
        {
          v15 = *(_QWORD *)(i + 8);
          if ( !v15 )
          {
            v16 = i;
            for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)i == v16 )
                break;
              v16 = i;
            }
LABEL_13:
            if ( i )
            {
              while ( (*(_DWORD *)(i + 48) & 0x3100000) != 0x2100000 || (*(_DWORD *)(i + 64) & 4) == 0 )
              {
                if ( (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) < (a2 + a3 - 1) >> 12 )
                {
                  v17 = *(_QWORD ***)(i + 8);
                  v18 = i;
                  if ( v17 )
                  {
                    v19 = *v17;
                    for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
                      i = (unsigned __int64)v19;
                  }
                  else
                  {
                    for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                          i;
                          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
                    {
                      if ( *(_QWORD *)i == v18 )
                        break;
                      v18 = i;
                    }
                  }
                  if ( i )
                    continue;
                }
                goto LABEL_37;
              }
              a3 = ((*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12) - a2;
            }
LABEL_37:
            *a4 = a3;
            goto LABEL_38;
          }
        }
        else
        {
          if ( v14 >= (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) )
          {
            v13 = 1;
            break;
          }
          v15 = *(_QWORD *)i;
          if ( !*(_QWORD *)i )
            goto LABEL_13;
        }
        i = v15;
      }
    }
    if ( !v13 || (*(_DWORD *)(i + 48) & 0x3100000) != 0x2100000 || (*(_DWORD *)(i + 64) & 4) == 0 )
      goto LABEL_13;
    *a4 = (((*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12) | 0xFFF)
        - a2
        + 1;
    v10 = 2 - ((*(_BYTE *)(i + 64) & 1) != 0);
LABEL_38:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  }
  else
  {
    *a4 = a3;
  }
  if ( Process != (_KPROCESS *)a1 )
    KiUnstackDetachProcess((__int64)v20, 0LL);
  return v10;
}
