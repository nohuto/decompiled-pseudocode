/*
 * XREFs of USBD_ValidateConfigurationDescriptorInternal @ 0x1C0031CD4
 * Callers:
 *     UsbhValidateConfigurationDescriptor @ 0x1C0053050 (UsbhValidateConfigurationDescriptor.c)
 * Callees:
 *     memset @ 0x1C001D340 (memset.c)
 */

__int64 __fastcall USBD_ValidateConfigurationDescriptorInternal(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 **a4)
{
  unsigned __int8 **v4; // rsi
  int v6; // ebx
  __int16 v7; // r12
  _BYTE *PoolWithTag; // r14
  PVOID v9; // r13
  unsigned __int8 *v10; // rdi
  unsigned __int8 *v11; // r15
  unsigned int v12; // ecx
  int v13; // edx
  __int64 result; // rax
  unsigned __int8 *v15; // rsi
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+60h] [rbp+8h]
  char v25; // [rsp+70h] [rbp+18h]
  __int16 v28; // [rsp+80h] [rbp+28h]

  v4 = a4;
  v28 = 0;
  v6 = 0;
  v7 = 0;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v25 = 1;
  if ( !a1 || a2 < 9 || !a4 )
    return 3221237760LL;
  if ( *a1 >= 9u )
  {
    if ( a1[1] == 2 )
    {
      v11 = a1 + 2;
      v12 = *((unsigned __int16 *)a1 + 1);
      if ( v12 > a2 || (v13 = a1[4], v12 < 9 * (v13 + 1)) )
      {
        v6 = -1072693242;
        v10 = v11;
      }
      else
      {
        if ( !(_BYTE)v13 )
          goto LABEL_13;
        PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x204uLL, 0x42554855u);
        if ( !PoolWithTag )
        {
          v6 = -1073737728;
          v10 = a1;
          goto LABEL_13;
        }
        v9 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x100uLL, 0x42554855u);
        if ( v9 )
        {
          memset(PoolWithTag, 0, 0x204uLL);
          memset(v9, 0, 0x100uLL);
          v15 = a1 + 9;
          v16 = (unsigned __int64)&a1[*(unsigned __int16 *)v11];
          v24 = v16;
          if ( (unsigned __int64)(a1 + 9) < v16 )
          {
            while ( 1 )
            {
              if ( v16 - (unsigned __int64)v15 < 2 )
              {
                v6 = -1072693248;
                goto LABEL_29;
              }
              v17 = *v15;
              if ( (unsigned __int64)&v15[v17] > v16 )
                goto LABEL_59;
              switch ( v15[1] )
              {
                case 4u:
                  if ( (_BYTE)v17 != 9 )
                  {
LABEL_59:
                    v6 = -1072693247;
                    goto LABEL_29;
                  }
                  v20 = v15[2];
                  v21 = v15[3];
                  if ( v25 )
                  {
                    if ( (_BYTE)v21 )
                      goto LABEL_46;
                    *PoolWithTag = v20;
                    *(_WORD *)(PoolWithTag + 1) = 256;
                    ++v7;
                    PoolWithTag[514] = v15[4];
                    PoolWithTag[515] = 0;
                    *((_BYTE *)v9 + v20) = 1;
                    v28 = v7;
                    v25 = 0;
                  }
                  else
                  {
                    if ( (_BYTE)v20 == *PoolWithTag )
                    {
                      v22 = v15[3];
                      if ( PoolWithTag[v21 + 2] == 1 || PoolWithTag[1] >= (unsigned __int8)v21 )
                      {
LABEL_46:
                        v6 = -1072693245;
                        v10 = v15 + 3;
                        goto LABEL_30;
                      }
                    }
                    else
                    {
                      if ( *((_BYTE *)v9 + v20) == 1 || *PoolWithTag > (unsigned __int8)v20 )
                      {
                        v6 = -1072693245;
                        v10 = v15 + 2;
                        goto LABEL_30;
                      }
                      if ( (_BYTE)v21 )
                        goto LABEL_46;
                      *((_BYTE *)v9 + v20) = 1;
                      *PoolWithTag = v20;
                      v28 = v7 + 1;
                      memset(PoolWithTag + 2, 0, 0x100uLL);
                      v22 = v21;
                    }
                    if ( PoolWithTag[515] != PoolWithTag[514] )
                    {
                      v6 = -1072693240;
                      goto LABEL_29;
                    }
                    memset(PoolWithTag + 258, 0, 0x100uLL);
                    v16 = v24;
                    PoolWithTag[515] = 0;
                    PoolWithTag[514] = v15[4];
                    PoolWithTag[v22 + 2] = 1;
                    v7 = v28;
                    PoolWithTag[1] = v21;
                  }
                  break;
                case 5u:
                  if ( (_BYTE)v17 != 7 )
                    goto LABEL_59;
                  if ( v25 )
                  {
                    v6 = -1072693244;
                    goto LABEL_29;
                  }
                  v19 = v15[2];
                  if ( PoolWithTag[v19 + 258] )
                  {
                    v6 = -1072693239;
                    v10 = v15 + 2;
                    goto LABEL_30;
                  }
                  PoolWithTag[v19 + 258] = 1;
                  ++PoolWithTag[515];
                  break;
                case 0xBu:
                  if ( (_BYTE)v17 != 8
                    || (v18 = v15[3], v18 + (unsigned int)v15[2] > 0x100)
                    || (unsigned __int8)v18 > a1[4]
                    || !(_BYTE)v18 )
                  {
                    v6 = -1072693243;
LABEL_29:
                    v10 = v15;
                    goto LABEL_30;
                  }
                  break;
              }
              v23 = *v15;
              if ( (_BYTE)v23 )
              {
                v15 += v23;
                if ( (unsigned __int64)v15 < v16 )
                  continue;
              }
              break;
            }
          }
          if ( v7 != a1[4] )
          {
            v6 = -1072693241;
            v10 = a1;
          }
LABEL_30:
          v4 = a4;
        }
        else
        {
          v10 = a1;
          v6 = -1073737728;
        }
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      goto LABEL_13;
    }
    v6 = -1072693246;
    v10 = a1 + 1;
  }
  else
  {
    v6 = -1072693247;
    v10 = a1;
  }
LABEL_13:
  result = (unsigned int)v6;
  if ( v6 >= 0 )
    v10 = 0LL;
  *v4 = v10;
  return result;
}
