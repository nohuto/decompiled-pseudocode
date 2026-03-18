/*
 * XREFs of ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x1C00784C8
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C007F5C4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPresentRate::NotifyFrame(CPresentRate *this)
{
  CPresentRate *v1; // rax
  unsigned __int64 v2; // rdx
  unsigned int i; // r10d
  unsigned int v4; // r9d

  v1 = 0LL;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  for ( i = 0; i < 2; ++i )
  {
    v4 = *(_DWORD *)this;
    if ( *(_DWORD *)this && (unsigned int)v2 >= v4 && (unsigned int)v2 - v4 <= 0x3E8 )
    {
      if ( (unsigned int)v2 - v4 <= 0x1F4 )
      {
        ++*((_DWORD *)this + 1);
        return;
      }
    }
    else
    {
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
      if ( !v1 )
        v1 = this;
    }
    this = (CPresentRate *)((char *)this + 8);
  }
  if ( *(_DWORD *)v1 )
  {
    if ( (unsigned int)(v2 - *(_DWORD *)v1) <= 0x1F4 )
      ++*((_DWORD *)v1 + 1);
  }
  else
  {
    *(_DWORD *)v1 = v2;
    *((_DWORD *)v1 + 1) = 1;
  }
}
